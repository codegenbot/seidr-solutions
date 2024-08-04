#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            result += ' '; // Add space to separate words
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += std::toupper(c);
            capitalizeNext = false;
        } else {
            result += c;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "The equivalent camelCase is: " << kebabToCamel(input) << std::endl;
    return 0;
}