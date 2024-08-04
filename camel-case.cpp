#include <iostream>
#include <string>

std::string toCamelCase(const std::string& s) {
    if (s.empty()) {
        return "";
    }

    int idx = 0;
    while ((idx = s.find('-', idx)) != std::string::npos) {
        s[idx] = ' ';
        ++idx;
    }

    size_t pos = 0;

    // First word
    for (size_t i = pos; i < s.find(' ', pos); ++i) {
        if (pos == 0) {
            result += tolower(s[i]);
        } else {
            result += toupper(s[i]);
        }
    }
    result.push_back(' ');

    // Recursive call
    return firstWord + toCamelCase(s.substr(s.find(' ') + 1));
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << toCamelCase(input) << std::endl;
    return 0;
}