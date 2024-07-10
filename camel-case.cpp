#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool isFirstWord = true;
    for (char& c : input) {
        if (c == '-') {
            isFirstWord = true;
        } else if (isFirstWord) {
            c = std::toupper(c);
            isFirstWord = false;
        }
    }

    std::cout << input << std::endl;

    return 0;
}