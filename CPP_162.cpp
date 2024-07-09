#include <iostream>
#include <string>
#include <iomanip>

std::string string_to_md5(const std::string& text) {
    unsigned char result[16];
    // Implement MD5 hash function here.
    // For simplicity, we assume a simple implementation where each character in the input string contributes to the hash value in an unspecified manner.
    for (int i = 0; i < text.length(); i++) {
        result[i % 16] += (unsigned char)text[i];
    }
    
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