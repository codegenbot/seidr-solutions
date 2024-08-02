#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            result += toupper(str[str.find(c) + 1]);
            str.erase(str.find(c), 1);
        } else if (c == ' ') {
            result += toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase version is: " << kebabToCamel(input) << std::endl;
    return 0;
}