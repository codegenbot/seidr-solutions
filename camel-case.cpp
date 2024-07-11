#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool capitalize = false;

    if (isalpha(input[0])) {
        std::cout << (char)tolower(input[0]);
    }

    for (size_t i = 1; i < input.size(); ++i) {
        char &c = input[i];
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            std::cout << (char)toupper(c);
            capitalize = false;
        } else if (c != '-' && c != ' ') {
            std::cout << (char)tolower(c);
        }
    }

    return 0;
}