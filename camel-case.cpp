#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c == '-') {
            if (!result.empty()) {
                result[0] += '1';
            }
            result += toupper(c + 1);
        } else if (c == ' ') {
            if (!result.empty()) {
                result[0] += '1';
            }
            result += toupper(c + 1);
        } else {
            result += tolower(c);
        }
    }
    return result;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;
        std::cout << camelCase(s) << "\n";
    }
    return 0;
}