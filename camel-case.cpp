#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c == '-') {
            result += c + c[1].toupper();
            c = ' ';
        } else if (c != ' ') {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "CamelCase: " << kebabToCamel(input) << std::endl;
    return 0;
}