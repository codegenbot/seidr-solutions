#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5(reinterpret_cast<const unsigned char*>(text.c_str()), text.length(), digest);

    char hash[MD5_DIGEST_LENGTH * 2 + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&hash[i * 2], "%02x", static_cast<int>(digest[i]));
    }

    return std::string(hash);
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);

    std::string md5Hash = string_to_md5(text);
    std::cout << "MD5 Hash: " << md5Hash << std::endl;

    return 0;
}