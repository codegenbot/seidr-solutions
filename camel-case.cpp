#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::vector<std::string> parts = {""};
    for (int i = 0; i <= s.length(); ++i) {
        if (s[i] == '-' || i == s.length()) {
            parts.back() += toupper(s[i] == '-' ? s[++i] : s[i]);
            if (i < s.length()) {
                parts.push_back("");
            }
        } else {
            parts.back() += tolower(s[i]);
        }
    }
    return parts[0];
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}