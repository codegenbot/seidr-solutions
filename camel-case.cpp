#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == '-') i++;
            if (i < s.length()) {
                result += s[i].toUpperCase();
                i++;
            }
        } else if (s[i] != ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += s[i];
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}