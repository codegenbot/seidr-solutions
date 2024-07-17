#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || (s[i] == '-' && i > 0)) {
            if (result.length() > 0) {
                result[0] = toupper(s[i]);
            } else {
                result += s[i];
            }
        } else if (i > 0 && s[i-1] == '-') {
            result += toupper(s[i]);
        } else {
            result += s[i];
        }
    }
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}