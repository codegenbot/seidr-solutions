#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c == '-') {
            result += toupper(s[s.find(c) + 1]);
            s.erase(s.find(c), 1);
        } else if (c == ' ') {
            result += toupper(s[s.find(c)]);
            s.erase(s.find(c), 1);
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