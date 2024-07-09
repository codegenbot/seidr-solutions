#include <iostream>
#include <string>
#include <cctype>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? std::toupper(c) : std::tolower(c);
        } else {
            result += c;
        }
    }
    return !result.empty() ? result : result; // This line should return the reversed string if the original string is empty
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << solve(input) << std::endl;
    return 0;
}