#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool firstWord = true;
    
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || (s[i] == '-' && i != s.find(' '))) {
            if (!firstWord) {
                if (s[i-1] >= 'A' && s[i-1] <= 'Z') {
                    result += s.substr(i - 1, 1);
                } else {
                    result += char(toupper(s[i]));
                }
            } else {
                if (i > 0) {
                    result += tolower(s.substr(0, i));
                }
            }
            firstWord = false;
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