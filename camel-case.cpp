```cpp
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
            result += toupper(c);  // Capitalize first letter of each word
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    // Remove the first space if it exists and convert the first character to uppercase
    if (!result.empty() && result[0] == ' ') {
        result.erase(0, 1);
        capitalize = true;
    }

    if (capitalize) {
        result += toupper(result[0]);
        capitalize = false;
    } else {
        result[0] = tolower(result[0]);
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