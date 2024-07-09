#include <iostream>
#include <string>
#include <openssl/ssl.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    EVP_MD_CTX mdctx;
    EVP_PKEY *md5_sig = EVP_get_digestbyname("MD5");
    EVP_DigestInit(&mdctx, md5_sig);
    const char* p = text.c_str();
    while (*p) {
        EVP_DigestUpdate(&mdctx, p, 1);
        p++;
    }
    unsigned int len;
    EVP_DigestFinal(&mdctx, md5, &len);

    std::string result;
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result.append(2, buf);
    }

    return result;
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);

    try {
        std::string hashedText = string_to_md5(text);
        std::cout << "MD5: " << hashedText << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}