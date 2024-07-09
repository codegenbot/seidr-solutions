#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            first = false;
        } else if (!first) {
            result[0] = toupper(c);
            result += c + ' ';
        } else {
            result += tolower(c);
        }
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << '\n';
    }
    return 0;
}