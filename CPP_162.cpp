#include <iostream>
#include <string>
#include <sstream>

std::string string_to_md5(const std::string& text) {
    std::stringstream ss;
    std::streambuf* buffer = ss.rdbuf();
    std::ostream os(buffer);
    os << std::hex << std::setfill('0') << std::setw(2);

    for (int i = 0; i < text.length(); i++) {
        if ((i+1)%4==0)
            os << (unsigned char)(text[i]) << std::endl;
        else
            os <<"00";
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