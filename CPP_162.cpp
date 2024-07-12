#include <iostream>
#include <string>
#include <cassert>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    OpenSSL_add_all_algorithms(); // Initialize OpenSSL library

    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    if (mdctx == nullptr) {
        EVP_cleanup();
        return "Error initializing MD context";
    }

    if (EVP_DigestInit_ex(mdctx, EVP_md5(), nullptr) != 1) {
        EVP_MD_CTX_free(mdctx);
        EVP_cleanup();
        return "Error initializing MD5 digest";
    }

    if (EVP_DigestUpdate(mdctx, text.c_str(), text.length()) != 1) {
        EVP_MD_CTX_free(mdctx);
        EVP_cleanup();
        return "Error updating digest with input text";
    }

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;
    if (EVP_DigestFinal_ex(mdctx, digest, &digest_len) != 1) {
        EVP_MD_CTX_free(mdctx);
        EVP_cleanup();
        return "Error finalizing digest";
    }

    EVP_MD_CTX_free(mdctx);
    EVP_cleanup(); // Free resources after usage

    char mdString[33];
    for(int i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(mdString);
}