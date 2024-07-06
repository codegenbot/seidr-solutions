#include <iostream>
#include <string>
#include <openssl/ssl.h>
#include <openssl/x509v3.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "";
    }

    unsigned char result[16];
    MD5((const unsigned char*)text.c_str(), text.size(), result);

    std::stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "MD5 of the entered string is: " << string_to_md5(input) << std::endl;
    return 0;
}