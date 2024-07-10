#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            s = s.replace(s.find('-'), 1, "");
        } else if (!first) {
            result[0] = toupper(c);
            result += c;
        } else {
            result += tolower(c);
        }
        first = false;
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << '\n';
    }
    return 0;
}