#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool nextWordIsUpper = false;

    for (char c : str) {
        if (c == '-') {
            result += ' ';  // Replace '-' with a space
        } else if (c == ' ') {
            if (!nextWordIsUpper) {  // If the previous word was lowercase, add ' to capitalize it
                result += ' ';
            }
        } else {
            if (nextWordIsUpper) {
                result += toupper(c);
            } else {
                result += tolower(c);
                nextWordIsUpper = true;  // Set the flag for the next word
            }
            if (c == '-') {  // Reset the flag when a '-' is encountered
                nextWordIsUpper = false;
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