```
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == '-') {
            if (result.back() != ' ') {
                result.push_back(toupper(s[i]));
            } else {
                result += " " + topper(s.substr(i));
                break;
            }
        } else if (s[i] == ' ') {
            if (i < s.length() - 1) {
                result.push_back(char(toupper(s[i + 1])));
            } else {
                result += tolower(s[i]);
            }
            i++;
        } else {
            if (i > 0 && result.back() != ' ') {
                result.push_back(tolower(s[i]));
            } else {
                result += s.substr(i);
                break;
            }
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