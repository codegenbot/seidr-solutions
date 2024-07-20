#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true; // Reset capitalization flag
        } else if (capitalizeNext) {
            // First character of a new group, uppercase it
            result += toupper(c);
            capitalizeNext = false;
        } else {
            // Not the first character, lowercase it
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "camelCase: " << camelCase(input) << std::endl;

    return 0;
}