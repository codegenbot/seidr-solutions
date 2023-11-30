#include <cctype>
#include <string>
#include <cassert>

std::string solve(std::string s) {
    std::string result = "";
    bool hasLetter = false;

    for (char c : s) {
        if (std::isalpha(c)) {
            hasLetter = true;
            if (std::isupper(c)) {
                result += std::tolower(c);
            } else {
                result += std::toupper(c);
            }
        } else {
            result += c;
        }
    }

    if (!hasLetter) {
        std::reverse(result.begin(), result.end());
    }

    return result;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    // Add more test cases here
    return 0;
}