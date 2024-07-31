#include <iostream>
#include <string>

std::string hex_key_value() {
    std::string num;
    for (char c; std::cin >> c;) {
        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f')) {
            num += c;
        }
    }
    return num;
}

int main() {
    std::string output = hex_key_value();
    if (!output.empty()) {
        std::cout << "The result is: " << output << std::endl;
    } else {
        std::cout << "No valid hexadecimal key found." << std::endl;
    }
}