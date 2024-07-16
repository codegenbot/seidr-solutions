#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

std::string camelCase(std::string s) {
    std::string result = "";
    bool nextUpper = true;
    for (char c : s) {
        if (c == '-') {
            nextUpper = true;
        } else if (nextUpper) {
            result += std::toupper(c);
            nextUpper = false;
        } else {
            result += std::tolower(c);
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