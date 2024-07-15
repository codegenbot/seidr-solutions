#include <iostream>
#include <sstream>
#include <string>

std::string camelCase(const std::string& input) {
    std::stringstream ss;
    bool capitalize = true;

    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            ss << char(std::toupper(c));
            capitalize = false;
        } else {
            ss << c;
        }
    }

    return ss.str();
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "Resultant camelCase string is: " << camelCase(input) << std::endl;
    return 0;
}