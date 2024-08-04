#include <iostream>
#include <algorithm>

std::string solve(std::string s) {
    for(char &c : s) {
        if(std::isalpha(c)) {
            c = std::islower(c) ? std::toupper(c) : std::tolower(c);
        }
    }
    if(std::all_of(s.begin(), s.end(), [](char c) { return !std::isalpha(c); })) {
        std::reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}