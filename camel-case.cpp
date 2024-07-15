#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool firstWord = true;

    for (char c : str) {
        if (c == '-') {
            if (!firstWord) {
                result[0] -= 32; // Convert to uppercase
            }
            firstWord = false;
            result += " ";
        } else if (c != ' ') {
            if (!firstWord) {
                result[0] -= 32; // Convert to uppercase
            }
            result += c;
            firstWord = true;
        }
    }

    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> str;
    std::cout << "CamelCase: " << kebabToCamel(str) << std::endl;

    return 0;
}