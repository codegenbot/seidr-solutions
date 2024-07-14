#include <iostream>
#include <string>

std::string toCamelCase(std::string s) {
    std::string result;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '-') {
            ++i; // skip the '-'
            while (i < s.size() && isalpha(s[i])) {
                result += toupper(s[i]);
                ++i;
            }
        } else if (isalpha(s[i])) {
            if (result.empty()) {
                result = tolower(s[i]);
            } else {
                result += toupper(s[i]);
            }
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