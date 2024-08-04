#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <cassert>

std::string string_to_md5(const std::string &text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[16];
    EVP_MD_CTX *mdctx = EVP_MD_CTX_new();
    EVP_DigestInit(mdctx, EVP_md5());
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, NULL);
    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    return mdString;
}

int test_main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}

int main() {
    std::cout << string_to_md5("password") << std::endl;
    return 0;
}