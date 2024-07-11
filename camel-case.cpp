#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool capitalize = false;
    for (int i = 0; i < input.length(); ++i) {
        if (i == 0 || input[i - 1] == '-') {
            std::cout << (char)toupper(input[i]);
        } else if (input[i] != '-') {
            std::cout << input[i];
        }
    }

    return 0;
}