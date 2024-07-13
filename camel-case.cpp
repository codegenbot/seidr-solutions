#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    if (s.empty()) return s;

    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result += c;
            }
            first = false;
        } else if (c == ' ') {
            if (!first) {
                result += std::toupper(c);
            }
            first = true;
        } else {
            if (first) {
                result += std::tolower(c);
            } else {
                result += std::toupper(c);
            }
            first = false;
        }
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        std::cout << kebabToCamel(s) << '\n';
    }

    return 0;
}