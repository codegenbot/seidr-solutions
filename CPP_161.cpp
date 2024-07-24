#include <algorithm>
#include <cassert>
#include <cctype>
#include <string>

std::string solve(const std::string& s) {
    for (char &c : s) {
        if (std::isalpha(c)) {
            c = std::islower(c) ? std::toupper(c) : std::tolower(c);
        }
    }
    if (std::count_if(s.begin(), s.end(), [](char c) { return std::isalpha(c); }) == 0) {
        std::reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}