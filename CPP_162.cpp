#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <openssl/md5.h>
#include <cassert>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* mdctx;
    unsigned char digest[MD5_DIGEST_LENGTH];
    unsigned int md_len;

    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &md_len);
    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(mdString);
}

int contest_main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}