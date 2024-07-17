#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool first = true;
    
    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result += char(toupper(c));
            } else {
                first = false;
            }
        } else if (c == ' ') {
            if (!first) {
                result += char(toupper(c));
            } else {
                first = false;
            }
        } else {
            if (first) {
                result += c;
                first = false;
            } else {
                result += tolower(c);
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