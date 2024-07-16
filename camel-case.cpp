#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    size_t i = 0;

    for (char c : str) {
        if (c == '-') {
            if (!firstWord) {
                result += toupper(str[i + 1]);
            }
            firstWord = false;
            i++;
        } else if (c == ' ') {
            if (!firstWord) {
                result += char(tolower(c));
            }
            firstWord = true;
        } else {
            if (firstWord) {
                result += c;
            } else {
                result += char(tolower(c));
            }
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