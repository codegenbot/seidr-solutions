#include <iostream>
#include <string>
#include <algorithm>

int solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty();
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