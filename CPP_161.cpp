#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>
    
std::string solve(std::string s) {
    bool hasLetter = false;
    for (char &c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    if (!hasLetter) {
        reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}