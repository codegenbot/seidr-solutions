#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <cassert>

std::string string_to_md5(const std::string& text) {
    if(text.empty()) {
        return "None";
    }

    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    EVP_DigestInit(ctx, EVP_md5());
    EVP_DigestUpdate(ctx, text.c_str(), text.length());

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digestLen;
    EVP_DigestFinal(ctx, digest, &digestLen);

    EVP_MD_CTX_free(ctx);

    char mdString[33];
    for(size_t i = 0; i < digestLen; i++) {
        sprintf(&mdString[i*2], "%02x", digest[i]);
    }
    mdString[32] = '\0';

    return mdString;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    return 0;
}