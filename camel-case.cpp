#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool firstWord = true;
    for (char c : s) {
        if (c == '-') {
            if (!firstWord) {
                result += std::toupper(c);
            } else {
                firstWord = false;
            }
        } else if (c == ' ') {
            if (!firstWord) {
                result += std::toupper(c);
            } else {
                firstWord = false;
            }
        } else {
            if (!firstWord) {
                result += c;
            } else {
                result += std::tolower(c);
                firstWord = false;
            }
        }
    }
    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}