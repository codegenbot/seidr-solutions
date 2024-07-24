#include <string>
#include <cctype>

std::string solve(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            result += (s[i] >= 'a' && s[i] <= 'z') ? toupper(s[i]) : tolower(s[i]);
        } else {
            result += s[i];
        }
    }
    if (!any(isalpha, s.begin(), s.end())) {
        std::reverse(result.begin(), result.end());
    }
    return result;
}