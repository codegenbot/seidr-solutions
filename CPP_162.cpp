#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

std::string string_to_md5(const std::string& text) {
    std::stringstream ss;
    for (int i = 0; i < text.length(); i++) {
        if ((i+1)%4==0)
            ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<unsigned>(text[i]);
        else
            ss <<"0";
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