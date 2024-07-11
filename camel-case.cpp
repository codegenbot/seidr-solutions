#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool capitalize = false;
    std::cout << (capitalize ? (char)std::tolower(input[0]) : input[0]);

    for (size_t i = 1; i < input.length(); ++i) {
        if (input[i] == '-' || input[i] == ' ') {
            capitalize = true;
        } else if (capitalize) {
            std::cout << (char)std::toupper(input[i]);
            capitalize = false;
        } else {
            std::cout << (char)std::tolower(input[i]);
        }
    }

    return 0;
}