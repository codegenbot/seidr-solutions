#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-' || c == ' ') { 
            capitalizeNext = (c == ' ');
        } else {
            result += (capitalizeNext ? toupper(c) : tolower(c));
            capitalizeNext = false;
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