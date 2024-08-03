#include <iostream>
#include <string>
#include <cassert>
#include <openssl/md5.h>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* mdctx;
    const EVP_MD* md = EVP_md5();
    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;

    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit(mdctx, md);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &digest_len);
    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for(unsigned int i = 0; i < digest_len; i++) {
        sprintf(&mdString[i*2], "%02x", digest[i]);
    }

    return std::string(mdString);
}

int main_custom_name() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    return 0;
}