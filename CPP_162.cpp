#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <cassert>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    OpenSSL_add_all_algorithms();

    unsigned char digest[16];
    EVP_MD_CTX *mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, EVP_md5(), nullptr);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, nullptr);
    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int) digest[i]);
    }

    return std::string(mdString);
}