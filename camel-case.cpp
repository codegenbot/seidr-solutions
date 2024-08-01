```c++
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
    std::string word;
    std::cout << "Enter a string in kebab-case: ";
    while (std::cin >> word && !word.empty()) {
        std::string input = word + " ";
        while (std::cin.peek() == ' ') {
            std::cin.ignore();
        }
        if (!input.empty()) {
            break;
        }
    }
    std::cout << camelCase(input.substr(0, input.size() - 1)) << std::endl;

    return 0;
}