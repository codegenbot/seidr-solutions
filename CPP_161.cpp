#include <iostream>
#include <algorithm>

std::string solve(const std::string &s) {
    for(char &c : s) {
        c = isalpha(c) ? (islower(c) ? toupper(c) : tolower(c)) : c;
    }

    if(all_of(s.begin(), s.end(), [](char c) { return !isalpha(c); })) {
        reverse(s.begin(), s.end());
    }
    
    return s;
}

int main() {
    assert (solve("#ccc") == "#CCC");
    
    return 0;
}