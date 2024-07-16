```
#include <iostream>
#include <string>
#include <cctype>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            if (capitalize) {
                result += ' ';  // Add a space to separate words
                capitalize = true;  // Start new word, so capitalize next char
            } else {
                result += c;
                capitalize = true;
            }
        } else if (capitalize) {
            result += toupper(c);  // Capitalize first letter of each word
            capitalize = false;
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