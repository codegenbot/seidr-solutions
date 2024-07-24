#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == '-') {
            if (result != "") {
                result += toupper(s[i]);
            } else {
                result += tolower(s[i]);
            }
        } else if (!std::isalpha(s[i])) {
            continue;
        } else {
            if (result == "") {
                result = tolower(s[i]) + "";
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
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}