#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == '-') {
            if (result.empty()) {
                continue;
            }
            result[0] = toupper(result[0]);
            break;
        } else if (s[i] == ' ') {
            continue;
        }
        result += tolower(s[i]);
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