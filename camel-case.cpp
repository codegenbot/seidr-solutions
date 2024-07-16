#include <iostream>
#include <cctype>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            result += ' ';  // Add a space to separate words
            capitalize = true;  // Start new word, so capitalize next char
        } else if (capitalize) {
            result += std::toupper(c);  // Capitalize first letter of each word
            capitalize = false;
        } else {
            result += std::tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    try {
        std::cout << "Enter a string in kebab-case: ";
        std::getline(std::cin, input);
        if (input.empty()) {
            throw std::runtime_error("Input cannot be empty!");
        }
        std::cout << "CamelCase output: " << kebabToCamel(input) << std::endl;
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;