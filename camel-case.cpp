#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string result;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            if (!firstWord) {
                result += char(toupper(c));
            } else {
                firstWord = false;
            }
        } else if (c == ' ') {
            if (!firstWord) {
                result += char(toupper(c));
            } else {
                firstWord = false;
            }
        } else {
            result += c;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;

    std::cout << "The camelCase version is: " << camelCase(input) << std::endl;

    return 0;
}