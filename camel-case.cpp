#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool nextWordIsUpper = true;

    for (char c : str) {
        if (c == '-') {
            result += ' ';  // Replace '-' with a space
            nextWordIsUpper = true;  // Reset the flag when a '-' is encountered
        } else if (c == ' ') {
            if (!nextWordIsUpper) {  // If the previous word was lowercase, add ' to capitalize it
                result += ' ';
            }
            nextWordIsUpper = false;
        } else {
            if (nextWordIsUpper) {
                result += toupper(c);
            } else {
                result += tolower(c);
                nextWordIsUpper = true;  // Set the flag for the next word
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "CamelCase conversion: " << kebabToCamel(input) << std::endl;

    return 0;
}