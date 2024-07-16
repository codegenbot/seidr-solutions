#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // skip the '-'
            while (i < s.size() && s[i] == ' ') i++; // skip the spaces
            result += std::toupper(s[i]);
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (!result.empty()) {
                result += std::tolower(s[i]);
            } else {
                result += std::toupper(s[i]);
            }
        }
    }
    return result;
}

int main() {
    std::string s;
    while (true) {
        std::cout << "Enter a string in kebab-case (or 'q' to quit): ";
        std::cin >> s;
        if (s == "q") break;
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}