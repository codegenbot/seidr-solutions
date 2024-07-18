#include <iostream>
#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>
#include <cassert>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* ctx;
    const EVP_MD* md = EVP_get_digestbyname("md5");
    ctx = EVP_MD_CTX_new();
    unsigned int len;
    unsigned char mdValue[EVP_MAX_MD_SIZE];
    EVP_DigestInit_ex(ctx, md, NULL);
    EVP_DigestUpdate(ctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(ctx, mdValue, &len);
    EVP_MD_CTX_free(ctx);

    char mdString[33];
    for (unsigned int i = 0; i < len; i++) {
        sprintf(&mdString[i * 2], "%02x", mdValue[i]);
    }

    return std::string(mdString);
}

int contest_main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}