#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool uppercaseNext = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            if (uppercaseNext)
                result += toupper(s[i + 1]);
            else
                result += s[i + 1];
            i++;
        } else if (uppercaseNext) {
            result += toupper(s[i]);
            uppercaseNext = false;
        } else {
            result += tolower(s[i]);
            if (s[i] == ' ')
                uppercaseNext = true;
        }
    }
    if (uppercaseNext)
        result += toupper(s[s.length() - 1]);
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}