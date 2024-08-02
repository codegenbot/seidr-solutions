#include <iostream>
#include <string>
#include <cassert>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty())
        return "None";

    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    EVP_DigestInit(ctx, EVP_md5());
    EVP_DigestUpdate(ctx, text.c_str(), text.length());
    EVP_DigestFinal(ctx, digest, NULL);
    EVP_MD_CTX_free(ctx);

    char mdString[33];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++)
        sprintf(&mdString[i * 2], "%02x", (unsigned int)digest[i]);

    return std::string(mdString);
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}