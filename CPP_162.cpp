#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <openssl/md5.h>
#include <cassert>

std::string string_to_md5(const std::string &text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_MD_CTX *mdctx = EVP_MD_CTX_new();
    EVP_DigestInit(mdctx, EVP_md5());
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, NULL);
    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int) digest[i]);
    }

    return mdString;
}