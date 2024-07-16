#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c == '-') {
            result += c + ((s[s.find(c) + 1] >= 'a' && s[s.find(c) + 1] <= 'z') ? "" : " ");
        } else if (c != '-') {
            result += tolower(c);
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