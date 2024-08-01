#include <iostream>
#include <string>
#include <algorithm>

std::string camelCase(const std::string& input) {
    std::string result = "";
    bool firstWord = true;
    int capNext = 0;

    for (char c : input) {
        if (c == '-') {
            capNext = 1;
        } else if (c == ' ') {
            if (!firstWord && !capNext) {
                result += char(std::toupper(c));
            }
            firstWord = true;
            capNext = 0;
        } else {
            if (firstWord || capNext) {
                result += c;
                if (!firstWord) {
                    capNext = 0;
                }
            } else {
                result += char(std::tolower(c));
                capNext = 1;
            }
            firstWord = false;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::replace_if(input.begin(), input.end(), [](char c){return c == '-';}, ' ');
    std::cout << camelCase(input) << std::endl;

    return 0;
}