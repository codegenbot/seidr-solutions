#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool nextWordIsUpper = true;

    for (char c : str) {
        if (c == '-') {
            nextWordIsUpper = true;
        } else if (c == ' ') {
            nextWordIsUpper = false;
        } else {
            if (nextWordIsUpper) {
                result += toupper(c);
                nextWordIsUpper = false;
            } else {
                result += tolower(c);
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "CamelCase conversion: " << kebabToCamel(input) << std::endl;

    return 0;
}