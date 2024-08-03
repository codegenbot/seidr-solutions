#include <openssl/evp.h>
#include <iostream>
#include <string>

std::string string_to_md5(const std::string &input) {
    EVP_MD_CTX *ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ctx, EVP_md5(), nullptr);
    EVP_DigestUpdate(ctx, input.c_str(), input.length());
    unsigned char hash[EVP_MD_size(EVP_md5())];
    EVP_DigestFinal_ex(ctx, hash, nullptr);
    EVP_MD_CTX_free(ctx);

    char buf[2 * EVP_MD_size(EVP_md5()) + 1];
    char *ptr = buf;
    for (int i = 0; i < EVP_MD_size(EVP_md5()); ++i) {
        ptr += sprintf(ptr, "%02x", hash[i]);
    }
    *ptr = '\0';

    return std::string(buf);
}

int main() {
    std::string input;
    std::cout << "Enter the string to compute MD5 hash: ";
    std::cin >> input;

    std::string md5_hash = string_to_md5(input);
    std::cout << "MD5 Hash: " << md5_hash << std::endl;

    return 0;
}