#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool capitalize = false;

    if (!input.empty()) {
        std::cout << (char)tolower(input[0]); // Print the first character in lowercase
        capitalize = true;
    }

    for (size_t i = 1; i < input.size(); ++i) {
        char &c = input[i];
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            std::cout << (char)toupper(c); // Capitalize next character
            capitalize = false;
        } else if (c != '-' && c != ' ' && input[i-1] != '-' && input[i-1] != ' ') { // Fix for the issue
            std::cout << (char)tolower(c); // Print lowercase character
        }
    }

    return 0;
}