```c++
#include <iostream>
#include <cctype>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            if (capitalize) {
                result += ' ';  // Add a space to separate words
                capitalize = true;  // Start new word, so capitalize next char
            } else {
                result += std::toupper(c);  // Capitalize first letter of each word
                capitalize = false;
            }
        } else if (capitalize) {
            result += c;  // Do not capitalize the first character of each word when reading from user input directly
            capitalize = false;
        } else {
            result += std::tolower(c);
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