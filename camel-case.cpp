#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the '-'
            while (i < s.length() && s[i] == '-') i++;
            if (i < s.length()) {
                if (!result.empty()) result += std::string(1, char(toupper(s[i]))); 
                else result = std::string(1, char(toupper(s[i])));
                while (i + 1 < s.length() && s[i + 1] == '-') i++;
            }
        } else {
            if (!result.empty()) {
                if (s[i] >= 'a' && s[i] <= 'z') result += std::string(1, char(toupper(s[i]))); 
                else result += s[i];
            } else {
                result = s.substr(0, i + 1);
                break;
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