#include <iostream>
#include <string>
#include <sstream>

std::string kebabToCamelCase(const std::string& s) {
    std::stringstream ss(s);
    std::string result;
    bool capitalize = true;

    std::string word;
    while (ss >> word) {
        for (char c : word) {
            if (capitalize) {
                result += toupper(c);
            } else {
                result += tolower(c);
            }
            if (c == '-') {
                capitalize = true;
            }
        }
        if (!word.empty()) {
            result.push_back(' '); // Add a space between words
            capitalize = false; // Reset capitalize for next word
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "CamelCase: " << kebabToCamelCase(input) << std::endl;

    return 0;
}