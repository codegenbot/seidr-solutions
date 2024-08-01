```cpp
#include <iostream>
#include <string>
#include <algorithm>

std::string camelCase(const std::string& input) {
    std::string result = "";
    bool firstWord = true;
    bool inWord = false;

    for (char c : input) {
        if (c == '-') {
            inWord = false;
        } else if (c == ' ') {
            inWord = true;
        } else {
            if (!inWord) {
                result += char(std::toupper(c));
                inWord = true;
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
    std::replace_if(input.begin(), input.end(), [](char c){return c == '-';}, ' ');
    std::cout << camelCase(input) << std::endl;

    return 0;
}