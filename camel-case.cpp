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
            result += c;
        }
    }

    return result;
}

int main() {
    std::string input(std::cin.nextLine());
    std::cout << "CamelCase output: " << kebabToCamel(input) << std::endl;
    return 0;
}