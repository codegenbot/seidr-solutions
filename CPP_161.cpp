#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <cassert> // Include the <cassert> header for assert

std::string solve(std::string s) {
    for (char &c : s) {
        if (std::isalpha(c)) {
            c = std::islower(c) ? std::toupper(c) : std::tolower(c);
        }
    }
    if (std::count_if(s.begin(), s.end(), std::isalpha) == 0) {
        std::reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    // Add more test cases here
    return 0;
}