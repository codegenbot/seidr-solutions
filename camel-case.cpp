#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            result += char(toupper(c + 1));
            first = true;
        } else if (c == ' ') {
            if (!first) {
                result += char(toupper(c + 1));
            }
            first = false;
        } else {
            if (first) {
                result += tolower(c);
            } else {
                result += toupper(c);
            }
            first = false;
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