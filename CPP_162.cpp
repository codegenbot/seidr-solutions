#include <iostream>
#include <string>
#include <cassert>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    OpenSSL_add_all_algorithms();

    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    if (!mdctx) {
        return "Error: Unable to create EVP_MD_CTX";
    }

    if (!EVP_DigestInit_ex(mdctx, EVP_md5(), nullptr)) {
        EVP_MD_CTX_free(mdctx);
        return "Error: EVP_DigestInit_ex";
    }

    if (!EVP_DigestUpdate(mdctx, text.c_str(), text.length())) {
        EVP_MD_CTX_free(mdctx);
        return "Error: EVP_DigestUpdate";
    }

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;
    if (!EVP_DigestFinal_ex(mdctx, digest, &digest_len)) {
        EVP_MD_CTX_free(mdctx);
        return "Error: EVP_DigestFinal_ex";
    }

    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for(int i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    EVP_cleanup();

    return std::string(mdString);
}