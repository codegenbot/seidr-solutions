#include <iostream>
#include <string>
#include <openssl/evp.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX *mdctx;
    const EVP_MD *md;
    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int md_len;

    md = EVP_md5();
    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &md_len);
    EVP_MD_CTX_free(mdctx);

    char md5hash[EVP_MAX_MD_SIZE * 2 + 1];
    for (int i = 0; i < md_len; i++) {
        sprintf(&md5hash[i * 2], "%02x", digest[i]);
    }

    return std::string(md5hash);
}

int main_custom_name() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);

    std::string md5hash = string_to_md5(text);
    std::cout << "MD5 hash: " << md5hash << std::endl;

    return 0;
}