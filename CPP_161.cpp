#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>

std::string solve(std::string s) {
    bool hasLetter = false;
    for (char& c : s) {
        if (std::isalpha(c)) {
            c = std::islower(c) ? std::toupper(c) : std::tolower(c);
            hasLetter = true;
        }
    }
    if (!hasLetter) {
        std::reverse(s.begin(), s.end());
    }
    return s;
}