#include <iostream>
#include <string>
#include <sstream>

std::string string_to_md5(const std::string& text) {
    std::stringstream ss;
    for (int i = 0; i < text.length(); i++) {
        if ((i+1)%4==0)
            ss << std::hex << std::setfill('0') << std::setw(2) << ((unsigned char)(text[i]))<< std::endl;
        else
            ss <<"00";
    }
    return ss.str();
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