#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    bool inWord = false;

    for (char c : str) {
        if (c == '-') {
            if (!firstWord) {
                result += char(toupper(c));
            }
            firstWord = false;
            inWord = true;
        } else if (c == ' ') {
            if (!firstWord) {
                if (!inWord) {
                    result.push_back(' ');
                }
                result += char(toupper(c));
            }
            firstWord = true;
            inWord = false;
        } else {
            if (!firstWord) {
                result += tolower(c);
            } else {
                if (c != ' ') {
                    result += toupper(c);
                } else {
                    result.push_back(' ');
                }
            }
            firstWord = false;
        }
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}