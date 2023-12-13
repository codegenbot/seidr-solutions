#include <iostream>
#include <string>
#include <vector>

std::string convertToCamelCase(const std::string& input) {
    std::string result;
    bool capitalizeNextChar = false;

    for (char c : input) {
        if (c == '-') {
            capitalizeNextChar = true;
        } else if (c != ' ') {
            if (capitalizeNextChar) {
                result += std::toupper(c);
                capitalizeNextChar = false;
            } else {
                result += c;
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = convertToCamelCase(input);
    std::cout << output << std::endl;

    return 0;
}