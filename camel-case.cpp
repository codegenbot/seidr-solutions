#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool inWord = false;
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            inWord = false;
            capitalizeNext = true;
        } else if (inWord) {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += tolower(c);
            }
        } else {
            result += c;
            inWord = true;
            capitalizeNext = true;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;

    std::cout << "CamelCase representation: " << kebabToCamel(input) << std::endl;

    return 0;
}