#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

std::string solve(const std::string& s);

std::string solve(const std::string& s) {
    std::string modifiedString = s;
    for (char &c : modifiedString) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if (s.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos) {
        std::reverse(modifiedString.begin(), modifiedString.end());
    }
    return modifiedString;
}

int main() {
    std::string input = "#ccc";
    std::string output = solve(input);
    std::cout << output << std::endl;
    return 0;
}