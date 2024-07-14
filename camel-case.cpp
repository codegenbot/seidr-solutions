#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::vector<std::string> tokens;
    size_t start = 0;
    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == '-') {
            tokens.push_back(s.substr(start, i - start));
            start = i + 1;
        }
    }

    std::string result;
    for (size_t i = 0; i < tokens.size(); ++i) {
        if (i > 0)
            result += std::toupper(tokens[i][0]);
        else
            result += tokens[i];
        if (i < tokens.size() - 1)
            result += " ";
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