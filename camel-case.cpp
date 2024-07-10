#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
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
            if (firstWord) {
                result += c;
            } else {
                result += char(tolower(c));
            }
            firstWord = false;
        }
    }
    // Append the remaining characters
    if (!firstWord) {
        while (result.size() > 0 && !isupper(result.back())) {
            result.pop_back();
        }
    }
    result += c;

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}