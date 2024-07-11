#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) if (!std::isspace(c)) {
        if (c == '-') {
            if (!first)
                result += char(toupper(c));
            else
                first = false;
        } else if (::isalnum(c)) {
            if (first) {
                result += tolower(c);
                first = false;
            } else {
                result += toupper(c);
            }
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::getline(std::cin, s)) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}