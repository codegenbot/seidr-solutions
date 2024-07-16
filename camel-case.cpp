#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == '-') i++;
            if (i < s.length()) {
                result += toupper(s[i]);
                i++;
            }
        } else if (s[i] != ' ') {
            if (!result.empty()) result += toupper(s[i]);
            else result += tolower(s[i]);
        }
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