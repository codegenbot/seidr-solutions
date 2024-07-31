#include <algorithm>
#include <cctype>
#include <string>
#include <cassert>

std::string solve(std::string s) {
    for(char &c : s) {
        if(isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if(all_of(s.begin(), s.end(), [](char c){ return !isalpha(c); })) {
        reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}