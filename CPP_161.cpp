#include <string>
#include <cctype>
#include <iostream>

std::string solve(std::string s);

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Result: " << solve(input) << std::endl;

}

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? std::toupper(c) : std::tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? std::string(s.rbegin(), s.rend()) : result;
}