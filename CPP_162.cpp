#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

std::string string_to_md5(const std::string& text) {
    unsigned char result[16];
    int n = 0;
    unsigned char c = 0;
    unsigned long hash = 0x12345678;

    for (int i = 0; i < text.length(); i++) {
        c = (unsigned char)(text[i]);
        hash = (hash << 8) ^ ((unsigned long)c);
    }

    n = (int)(4 + (text.length() / 16) * 64);

    std::string output;
    for(int i=0; i<n; i++) {
        output += (char)((hash >> (i*8)) & 0xFF);
    }

    return output;
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