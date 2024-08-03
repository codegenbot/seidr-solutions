#include <vector>
#include <iostream>
#include <string>

std::string toCamelCase(std::string s) {
    std::string result = "";
    size_t start = 0;
    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == '-') {
            size_t wordLen = i - start;
            if (wordLen > 0) {
                result += s.substr(start, wordLen);
                if (start < i && i < s.size()) {
                    result += std::string(1, toupper(s[i]));
                }
            }
            start = i + 1;
        }
    }
    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << toCamelCase(s) << std::endl;
    }
    return 0;
}