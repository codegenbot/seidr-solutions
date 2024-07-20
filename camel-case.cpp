#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c == '-') {
            continue;
        } else if (c == ' ') {
            result += toUpper(s.substr(s.find(c) + 1, 0));
            s.erase(0, s.find(c) + 1);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter the string: ";
    std::cin >> input;
    std::cout << camelCase(input) << std::endl;
    return 0;
}