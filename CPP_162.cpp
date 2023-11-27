#include <iostream>
#include <sstream>
#include <string>
#include <openssl/evp.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "";
    }

    EVP_MD_CTX* context = EVP_MD_CTX_new();
    EVP_DigestInit_ex(context, EVP_md5(), nullptr);
    EVP_DigestUpdate(context, text.c_str(), text.length());

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digestLength;
    EVP_DigestFinal_ex(context, digest, &digestLength);
    EVP_MD_CTX_free(context);

    std::ostringstream oss;
    for (int i = 0; i < digestLength; i++) {
        oss << std::hex << (int)digest[i];
    }

    return oss.str();
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string md5Hash = string_to_md5(input);
    std::cout << "MD5 Hash: " << md5Hash << std::endl;

    return 0;
}