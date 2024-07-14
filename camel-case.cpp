#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the '-'
            while (i < s.length() && s[i] == ' ') i++; // skip spaces
            result += toupper(s[i]); // capitalize the first letter of each word
        } else if (s[i] != ' ') {
            result += tolower(s[i]); // add lowercase letters
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