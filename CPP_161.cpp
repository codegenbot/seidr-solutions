#include <string>
#include <cctype>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? std::toupper(c) : std::tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? s.reverse() : result;
}