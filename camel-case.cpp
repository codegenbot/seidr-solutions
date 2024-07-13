#include <iostream>
#include <string>
#include <sstream>

std::string kebabToCamel(const std::string& s) {
    std::stringstream words(s);
    std::string result;
    std::string word;

    while (words >> word) {
        if (!result.empty()) {
            result += ' ';
        }
        for (char &c : word) {
            c = (word[0] == '-') ? toupper(c) : tolower(c);
        }
        result += word;
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