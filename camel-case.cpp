#include <iostream>
#include <string>

std::string toCamelCase(std::string s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first)
                result += char(toupper(c));
            else
                first = false;
        } else if (c == ' ') {
            if (!first)
                result += char(toupper(c));
            else
                first = false;
        } else {
            if (first)
                result += tolower(c);
            else
                result += c;
            first = false;
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << toCamelCase(s) << '\n';
    }
    return 0;
}