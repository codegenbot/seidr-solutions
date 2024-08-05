#include <algorithm>
#include <cassert>
#include <string>
#include <cctype>

std::string solve(const std::string &s);

std::string solve(const std::string &s) {
    for (char &c : s) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    if (std::count_if(s.begin(), s.end(), [](char c){ return isalpha(c); }) == 0) {
        std::reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    
    return 0;
}