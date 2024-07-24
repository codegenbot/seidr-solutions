#include <iostream>
#include <algorithm>
#include <cctype>
#include <cassert>

std::string solve(const std::string &s) {
    for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if (std::count_if(s.begin(), s.end(), [](char c) { return isalpha(c); }) == 0) {
        reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    
    return 0;
}