#include <iostream>
#include <algorithm>
#include <cassert>

std::string solve(std::string s) {
    for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if (s.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos) {
        std::reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    assert (solve("#ccc") == "#CCC");

    return 0;
}