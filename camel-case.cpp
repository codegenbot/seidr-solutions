#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result;
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (result.back() != ' ') {
                result.push_back(' ');
            }
            size_t j = i + 1;
            while (j < s.size() && s[j] != '-' && s[j] != ' ') {
                j++;
            }
            std::string word = s.substr(i, j - i);
            for (char c : word) {
                result.push_back(std::tolower(c));
            }
        } else if (!std::isalnum(s[i])) {
            continue;
        } else {
            if (result.back() == ' ') {
                result.pop_back();
            }
            result.push_back(std::toupper(s[i]));
        }
    }
    return result;
}

int main() {
    std::string s;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::cin >> s;
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}