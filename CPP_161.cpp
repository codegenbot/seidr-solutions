#include <algorithm>
#include <cassert>
#include <string>
#include <cctype>

std::string solve(const std::string &s) {
    std::string result = s;
    for (char &c : result) {
        if (std::islower(c)) {
            c = std::toupper(c);
        }
    }
    return result;
}