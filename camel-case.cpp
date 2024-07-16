#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result = "";
    bool firstWord = true;

    for (char c : s) {
        if (c == '-') {
            result += toUpper(s, ++firstWord);
        } else if (c == ' ') {
            if (!firstWord) {
                result += ' ';
            }
            firstWord = false;
        } else {
            if (!firstWord) {
                result += c;
            } else {
                firstWord = false;
                result += toLower(c);
            }
        }
    }

    return result;
}

char toUpper(const std::string& s, bool upperCase) {
    if (upperCase) {
        return toupper(s[0]);
    } else {
        return tolower(s[0]);
    }
}