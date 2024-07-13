#include <iostream>
#include <string>
#include <sstream>

std::string kebabToCamel(const std::string& s) {
    std::stringstream ss(s);
    std::string word;
    std::string result;

    while (ss >> word) {
        if (!result.empty()) {
            result += word.substr(0, 1).toupper() + word.substr(1).tolower();
        } else {
            result = word.substr(0, 1).toupper() + word.substr(1).tolower();
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase equivalent is: " << kebabToCamel(input) << std::endl;
    return 0;
}