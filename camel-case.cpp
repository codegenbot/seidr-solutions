#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;
    for (char &c : s) {
        if (capitalizeNext && c != '-') {
            result += std::toupper(c);
            capitalizeNext = false;
        } else if (c == '-') {
            capitalizeNext = true;
        } else {
            if (!capitalizeNext) {
                result += std::tolower(c);
            } else {
                result += c;
                capitalizeNext = false;
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