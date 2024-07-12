#include <iostream>
#include <string>

std::string kebabToCamelCase(const std::string& input) {
    std::string output;
    bool capitalizeNext = false;

    for (char c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            output += std::toupper(c);
            capitalizeNext = false;
        } else {
            output += c;
        }
    }

    return output;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << kebabToCamelCase(input) << std::endl;

    return 0;
}