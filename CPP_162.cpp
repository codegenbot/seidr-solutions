#include <iostream>
#include <string>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(ctx, text.c_str(), text.size());

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_length;
    EVP_DigestFinal_ex(ctx, digest, &digest_length);
    EVP_MD_CTX_free(ctx);

    char md5Hash[2 * digest_length + 1];
    for (int i = 0; i < digest_length; i++) {
        sprintf(&md5Hash[i * 2], "%02x", digest[i]);
    }

    return std::string(md5Hash);
}

int main() {
    std::string text;
    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    std::string result = string_to_md5(text);
    std::cout << "MD5 Hash: " << result << std::endl;

    return 0;
}