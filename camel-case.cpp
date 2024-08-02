#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);

    bool capitalize = false;
    for (char c : input) {
        if (c == ' ' || c == '-') {
            capitalize = true;
        } else {
            std::cout << (capitalize ? (char)(c - 'a' + 'A') : (char)(c - 'a' + 'A'));
            capitalize = false;
        }
    }

    return 0;
}