#include <iostream>
#include <string>

std::string solve(std::string s) {
    std::string result;
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return !result.empty() ? result : s;
}

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    std::string result = solve(std::move(s));
    if (!result.empty()) {
        std::cout << "Result: " << result << std::endl;
    } else {
        std::cout << "Result: " << s << std::endl; 
    }
}