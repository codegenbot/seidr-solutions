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
    return 0; // Changed from empty() to 0
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    if (solve(s)) {
        std::cout << "No solution exists" << std::endl;
    } else {
        std::cout << s << std::endl;
    }
}