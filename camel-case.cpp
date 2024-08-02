#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    int i = 0;
    
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                i++;
            }
            if (i < s.length()) {
                result += toupper(s[i]);
                i++;
            }
        } else {
            if (result.empty()) {
                result = tolower(s[i]);
            } else {
                result += tolower(s[i]);
            }
            i++;
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