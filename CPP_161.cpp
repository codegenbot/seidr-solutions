#include <algorithm>
#include <cctype>
#include <string>

std::string solve(std::string s) {
    for (char &c : s) {
        if (std::isalpha(c)) {
            c = std::islower(c) ? std::toupper(c) : std::tolower(c);
        }
    }
    if (std::none_of(s.begin(), s.end(), ::isalpha)) {
        std::reverse(s.begin(), s.end());
    }
    return s;
}