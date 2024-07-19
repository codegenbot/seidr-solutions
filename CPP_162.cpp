#include <iostream>
#include <string>
#include <cassert>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* mdctx;
    EVP_MD* md;
    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int md_len;

    md = EVP_md5();
    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &md_len);
    EVP_MD_CTX_free(mdctx);

    char mdString[(md_len * 2) + 1];
    for(unsigned int i = 0; i < md_len; i++) {
        snprintf(&mdString[i*2], 3, "%02x", digest[i]);
    }
    mdString[(md_len * 2)] = '\0';

    return std::string(mdString);
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99"); // MD5 hash for "password"
    return 0;
}