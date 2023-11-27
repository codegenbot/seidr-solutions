#include <iostream>
#include <openssl/evp.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    const EVP_MD* md = EVP_md5();
    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;

    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(mdctx, digest, &digest_len);

    char md5Hash[digest_len * 2];
    for (int i = 0; i < digest_len; ++i) {
        sprintf(&md5Hash[i * 2], "%02x", digest[i]);
    }

    EVP_MD_CTX_free(mdctx);

    return std::string(md5Hash, digest_len * 2);
}

int main() {
    std::string input;
    std::cout << "Enter the text: ";
    std::getline(std::cin, input);
    std::cout << "MD5 hash: " << string_to_md5(input) << std::endl;
    return 0;
}