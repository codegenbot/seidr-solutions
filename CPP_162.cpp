#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), digest);

    std::string result;
    char hex[3];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(hex, "%02x", digest[i]);
        result += hex;
    }
    return result;
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);

    std::string md5Hash = string_to_md5(text);
    std::cout << "MD5 Hash: " << md5Hash << std::endl;

    return 0;
}