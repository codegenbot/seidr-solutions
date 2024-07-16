#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string solve(std::string s) {
    for (char& c : s) {
        if (std::isalpha(c)) {
            if (std::islower(c)) {
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
        }
    }
    int n = s.size();
    for (int i = 0; i < n / 2; ++i) {
        std::swap(s[i], s[n - i - 1]);
    }
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}