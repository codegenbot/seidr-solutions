#include <algorithm>
#include <string>
#include <cctype>

std::string solve(const std::string& s) {
    std::string result = s;
    for (char &c : result) {
        if (std::isalpha(c)) {
            c = std::islower(c) ? std::toupper(c) : std::tolower(c);
        }
    }
    if (std::count_if(result.begin(), result.end(), std::isalpha) == 0) {
        std::reverse(result.begin(), result.end());
    }
    return result;
}