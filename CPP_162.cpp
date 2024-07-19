#include <iostream>
#include <string>
#include <cassert>
#include <openssl/evp.h>
#include <openssl/bio.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* mdctx;
    const EVP_MD* md = EVP_md5();
    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;

    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &digest_len);
    EVP_MD_CTX_reset(mdctx);

    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for(int i = 0; i < 16; i++) {
        snprintf(&mdString[i*2], 3, "%02x", digest[i]);
    }

    return std::string(mdString);
}

int main() {
    std::string result = string_to_md5("password");
    return 0;
}