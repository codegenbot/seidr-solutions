#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    size_t i = 0;

    for (i; i < str.length(); i++) {
        char c = str[i];
        if (c == '-') {
            if (!firstWord) {
                result += char(toupper(str[++i]));
            }
            firstWord = false;
        } else if (c == ' ') {
            if (!firstWord) {
                result += char(toupper(c));
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