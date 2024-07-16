#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

std::string camelCase(std::string s) {
    std::string result = "";
    bool nextUpper = true;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            if (!nextUpper) {
                result += s[i + 1];
            } else {
                result += toupper(s[i + 1]);
                nextUpper = false;
            }
            i++;
        } else if (nextUpper) {
            result += toupper(s[i]);
            nextUpper = false;
        } else {
            result += s[i];
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