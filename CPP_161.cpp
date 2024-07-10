#include <iostream>
#include <string>
#include <cctype>

int solve(std::string s) {
    for (char& c : s) {
        c = std::tolower(c);
    }
    return s.length();
}

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    int result = solve(s);
    std::cout << "Length of the converted string is: " << result << std::endl;
}