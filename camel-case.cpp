```
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
            result += c;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        s.erase(std::remove(s.begin(), s.end(), ' '), s.end()) - s.begin();
        s.erase(std::remove(s.begin(), s.end(), '-'), s.end()) - s.begin();
        std::cout << camelCase(s) << '\n';
    }
    return 0;
}