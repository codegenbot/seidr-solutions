#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalize = true;

    // Capitalize first letter of each word (grouped by spaces)
    for (char c : str) {
        if (c == '-') {
            result += ' ';  // Add a space to separate words
            capitalize = true;  // Start new word, so capitalize next char
        } else if (capitalize) {
            if (c == str[0] || capitalize) {
                result += toupper(c);  // Capitalize first letter of each word
                capitalize = false;
            } else {
                result += tolower(c);
            }
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "CamelCase output: " << kebabToCamel(input) << std::endl;
    return 0;
}