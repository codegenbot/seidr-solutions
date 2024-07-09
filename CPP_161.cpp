#include <algorithm>
#include <string>

std::string solve(std::string s) {
    std::string result;
    for (char c : s) {
        if (!result.empty()) {
            if ((int)c >= 97 && (int)c <= 122 || (int)c == 32)
                return "NO";
        }
        else if ((int)c >= 65 && (int)c <= 90 || (int)c == 32)
            continue;
        else
            result += c;
    }
    return result.empty() ? s.substr(0,s.size()) : std::string(result.rbegin(), result.rend());
}