#include <iostream>
#include <string>
#include <algorithm>

std::string camelCase(const std::string& input) {
    std::string result = "";
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            if (!firstWord) {
                result += char(std::toupper(c));
            }
            firstWord = false;
        } else if (c == ' ') {
            if (!firstWord) {
                result += '-';
            }
            firstWord = true;
        } else {
            if (firstWord) {
                result += std::tolower(c);
                firstWord = false;
            } else {
                result += c;
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    // Remove spaces
    std::replace_if(input.begin(), input.end(), ::isspace, '');

    std::cout << camelCase(input) << std::endl;

    return 0;
}