#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    str.erase(0, str.find_first_not_of(' ')); // Remove leading space(s)
    str.erase(0, str.find('-')); // Remove leading hyphen(s)

    std::string result = "";
    bool isNextUpper = false;
    for (char c : str) {
        if (c == '-') {
            continue; // Skip hyphens
        } else if (c == ' ') {
            if (!isNextUpper) { // Add space only if not already present
                result += ' ';
            }
            isNextUpper = false;
        } else {
            if (!isNextUpper) {
                if (result.empty()) { // Check for first character
                    result += std::toupper(c);
                } else {
                    result += c;
                }
                isNextUpper = true;
            } else {
                result += std::tolower(c);
            }
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}