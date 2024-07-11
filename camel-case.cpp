#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool capitalize = false;
    std::cout << (capitalize ? (char)std::tolower(input[0]) : input[0]);

    for (size_t i = 1; i < input.length(); ++i) {
        if (input[i] == '-') {
            capitalize = true;
        } else {
            std::cout << (capitalize ? (char)std::toupper(input[i]) : (char)std::tolower(input[i]));
            capitalize = false;  // Set capitalize back to false after converting
        }
        capitalize = false;  // Reset capitalize flag after printing the first letter of the word
    }

    return 0;
}