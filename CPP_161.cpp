#include <iostream>
#include <algorithm>

std::string solve(const std::string& s) {
    for (size_t i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    std::reverse(s.begin(), s.end());
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}