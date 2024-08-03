#include <iostream>
#include <algorithm>
#include <cassert>

std::string solve(std::string s) {
    for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    
    if (std::count_if(s.begin(), s.end(), [](char c) { return isalpha(c); }) == 0) {
        std::reverse(s.begin(), s.end());
    }
    
    return s;
}

assert(solve("#ccc") == "#CCC");