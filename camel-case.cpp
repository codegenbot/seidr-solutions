#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool capitalize = false;
    std::cout << (char)std::tolower(input[0]);

    for (size_t i = 1; i < input.length(); ++i) {
        if (input[i] == '-') {
            capitalize = true;
            std::cout << (char)std::toupper(input[++i]);
        } else {
            std::cout << (capitalize ? (char)std::toupper(input[i]) : (char)std::tolower(input[i]));
            capitalize = false;
        }
    }

    return 0;
}