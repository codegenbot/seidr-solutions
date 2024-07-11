#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool capitalize = false;

    if (!input.empty()) {
        std::cout << (char)toupper(input[0]); // Capitalize the first character
    }

    for (size_t i = 1; i < input.size(); ++i) {
        char &c = input[i];
        if (c != '-' && c != ' ') {
            if (capitalize) {
                std::cout << (char)toupper(c); // Capitalize next character
                capitalize = false;
            } else if (input[i - 1] == '-' || input[i - 1] == ' ') {
                std::cout << (char)toupper(c); // Capitalize first character after space
            } else {
                std::cout << (char)tolower(c); // Print lowercase character
            }
        }
    }

    return 0;
}