#include <iostream>
#include <string>
#include <algorithm>

int solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            if (c >= 'a' && c <= 'z') {
                result += toupper(c);
            } else {
                result += tolower(c);
            }
        } else {
            result += c;
        }
    }
    return 0;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    if (solve(s)) {
        std::cout << s << std::endl;
    } else {
        std::cout << "No solution exists" << std::endl;
    }
}