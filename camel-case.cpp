#include <iostream>
#include <string>

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
                result += char(std::toupper(c));
            }
            firstWord = true;
        } else {
            if (firstWord) {
                result += c;
            } else {
                result += char(std::tolower(c));
            }
            firstWord = false;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::string word;
    while (std::cin >> word && !word.empty()) {
        input += word + " ";
    }
    std::cout << camelCase(input) << std::endl;

    return 0;
}