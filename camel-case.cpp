#include <iostream>
#include <string>
#include <algorithm>

std::string camelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            first = false;
        } else if (!first) {
            result[0] = toupper(c);
            result += c;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::getline(std::cin, s)) {
        s.erase(std::remove_if(s.begin(), s.end(), [](char c){ return c == '-' || c == ' '; }), s.end());
        std::cout << camelCase(s) << '\n';
    }
    return 0;
}