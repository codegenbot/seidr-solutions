#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <hash_functions/md5.h>

std::string string_to_md5(const std::string& text) {
    MD5_CTX ctx;
    unsigned char result[16];
    md5_init(&ctx);
    const char* ptr = text.c_str();
    size_t length = text.length();
    md5_update(&ctx, (unsigned char*)ptr, length);
    md5_final(&ctx, result);

    std::string output;
    for(int i=0; i<16; i++) {
        std::stringstream ss;
        ss << std::setw(2) << std::setfill('0') << std::hex << (int)(result[i]);
        output += ss.str();
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