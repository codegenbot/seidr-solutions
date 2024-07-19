
#include <iostream>
#include <string>
#include <cassert>
#include <openssl/evp.h>
#include <openssl/bio.h>

std::string string_to_md5(const std::string& text) {
    EVP_MD_CTX *mdctx;
    const EVP_MD *md;
    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;

    md = EVP_md5();
    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &digest_len);
    EVP_MD_CTX_reset(mdctx);
    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for(int i = 0; i < 16; i++) {
        snprintf(&mdString[i*2], 3, "%02x", (unsigned int)digest[i]);
    }

    return std::string(mdString);
}

int main() {
    std::cout << string_to_md5("password") << std::endl;
    return 0;
}