#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::string word;
    bool firstWord = true;

    while (std::getline(iss, word, '-')) {
        if (!firstWord) {
            word[0] = std::toupper(word[0]);
        }
        std::cout << word;
        firstWord = false;
        if (iss) {
            std::cout << ' ';
        }
    }

    return 0;
}