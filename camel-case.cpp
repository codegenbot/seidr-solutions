#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool firstWord = true;
    
    for (int i = 0; i <= s.size(); ++i) {
        if (i == s.size() || (s[i] == '-' && s[i + 1] == ' ')) {
            if (!firstWord) {
                if (i < s.size()) {
                    result += toupper(s.substr(i));
                }
                i = s.find(' ', i);
                firstWord = true;
            } else {
                if (i < s.size()) {
                    result += tolower(s.substr(0, i));
                }
                i++;
            }
        } else if (s[i] == ' ') {
            if (!firstWord) {
                result += tolower(s.substr(i));
            }
            firstWord = true;
            i = s.find(' ', i);
        } else {
            if (!firstWord) {
                result += cctype::isupper(s[i]) ? tolower(s[i]) : s[i];
            } else {
                result += toupper(s[i]);
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