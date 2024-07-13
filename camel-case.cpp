#include <string>
#include <cctype>
#include <iostream>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            if (!capitalize) {
                result += toupper(str.find(c) + 1);
                capitalize = true;
            }
            result += ' ';
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter your string (in kebab-case): ";
    std::getline(std::cin, input);
    std::cout << "Camel Case: " << camelCase(input) << std::endl;
    return 0;