#include <iostream>
#include <string>
#include <algorithm>

std::string camelCase(const std::string& input) {
    std::string result;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            if (!firstWord) {
                result += char(std::toupper(c));
            }
            firstWord = false;
        } else if (c == ' ') {
            if (!firstWord) {
                result += char(std::toupper(c));
            }
            firstWord = true;
        } else {
            if (firstWord) {
                result += c;
                firstWord = false;
            } else {
                result += std::tolower(c);
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::replace_if(input.begin(), input.end(), [](char c){return c == '-' || c == ' ';}, '_');

    std::cout << camelCase(input) << std::endl;

    return 0;
}