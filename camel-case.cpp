#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == '-') {
            if (i > 0 && result.back() != ' ') {
                result.push_back(toupper(s[i]));
            } else {
                result += s.substr(i);
                break;
            }
        } else if (s[i] == ' ') {
            if (result.length() > 0) {
                result.push_back(char(toupper(s[i + 1])));
            } else {
                result += s.substr(i + 1);
                i++;
            }
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