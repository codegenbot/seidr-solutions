#include <iostream>
#include <string>

std::string fix_spaces(std::string text) {
    std::string result;
    bool previousSpace = false;
    int consecutiveSpaces = 0;

    for (char c : text) {
        if (c == ' ') {
            if (previousSpace) {
                consecutiveSpaces++;
            } else {
                result += '_';
                previousSpace = true;
            }
        } else {
            if (consecutiveSpaces > 1) {
                result += '-';
            }
            result += c;
            previousSpace = false;
            consecutiveSpaces = 0;
        }
    }

    if (consecutiveSpaces > 1) {
        result += '-';
    }

    return result;
}

int main() {
    std::string text;
    std::getline(std::cin, text);

    std::cout << fix_spaces(text) << std::endl;

    return 0;
}