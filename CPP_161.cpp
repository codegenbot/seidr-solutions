```
#include <string>
#include <cctype>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (std::isalpha(c)) {
            result += (std::cctype(c) >= 'a' && std::cctype(c) <= 'z') ? std::toupper(c) : std::tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? s : result;
}