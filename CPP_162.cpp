#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <string_view>

std::string_view string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX *mdctx;
    const EVP_MD *md;
    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int md_len;

    md = EVP_md5();
    mdctx = EVP_MD_CTX_new();
    
    EVP_DigestInit(mdctx, md);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &md_len);

    EVP_MD_CTX_free(mdctx);

    static char mdString[33];
    for (unsigned int i = 0; i < md_len; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return std::string_view(mdString, 32);
}