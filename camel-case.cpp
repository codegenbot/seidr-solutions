#include <iostream>
#include <string>

std::string toCamelCase(const std::string& s) {
    std::string result;
    bool firstWord = true;

    for (char c : s) {
        if (c == '-') {
            if (!firstWord) {
                result += char(toupper(c));
            }
            firstWord = false;
        } else if (c == ' ') {
            if (!firstWord) {
                result += char(toupper(c));
            }
            firstWord = true;
        } else {
            if (!firstWord) {
                result += c;
            } else {
                result += tolower(c);
                firstWord = false;
            }
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << toCamelCase(s) << std::endl;
    }
    return 0;
}