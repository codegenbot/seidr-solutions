
#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

std::string solve(const std::string& s);

std::string solve(const std::string& s) {
    std::string modified = s;
    for (char &c : modified) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if (modified.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos) {
        std::reverse(modified.begin(), modified.end());
    }
    return modified;
}

int main() {
    std::string input = "#ccc";
    std::string output = solve(input);
    std::cout << output << std::endl;
    return 0;
}