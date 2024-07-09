#include <iostream>
#include <string>

std::string string_to_md5(const std::string& text) {
    const unsigned int md5Len = 16;
    unsigned char result[md5Len];
    for (int i = 0; i < md5Len; ++i)
        result[i] = (text[i % text.length()] + i) % 256;

    std::string md5Hash;
    for (unsigned int i = 0; i < md5Len; ++i)
        md5Hash += sprintf("%02x", &result[i]);

    return md5Hash;
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