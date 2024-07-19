#include <iostream>
#include <string>
#include <algorithm>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? std::move(s) : result;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    if (!s.empty()) {
        std::cout << solve(s) << std::endl;
    } else {
        std::cout << "No solution exists" << std::endl;
    }
}