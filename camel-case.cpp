#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || (s[i] == '-' && i > 0)) {
            if (result.size()) {
                result[0] = toupper(result[0]);
            }
            int j = i + (s[i] == '-');
            while (j < s.length() && s[j] != '-') {
                result += tolower(s[j++]);
            }
            result += " ";
        } else if (result.size()) {
            result[0] = toupper(result[0]);
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            result += s[i];
        } else {
            result += tolower(s[i]);
        }
    }
    return result.substr(0, result.size() - 1);
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}