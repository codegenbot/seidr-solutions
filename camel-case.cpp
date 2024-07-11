#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool firstWord = true;

    for (char c : s) {
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
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}