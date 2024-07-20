#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    for (char c : s) {
        if (c == '-') {
            result += c[1].toupper();
        } else if (c == ' ') {
            result += ' ';
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
    std::cout << "CamelCase version: " << kebabToCamel(input) << std::endl;
    return 0;
}