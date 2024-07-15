#include <string>
#include <cctype>

std::string solve(std::string s) {
    std::string result = "";
    bool hasLetters = false;

    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            hasLetters = true;
            result += (s[i] >= 'a' && s[i] <= 'z') ? std::toupper(s[i]) : std::tolower(s[i]);
        } else {
            result += s[i];
        }
    }

    return hasLetters ? result : std::string(result.rbegin(), result.rend());
}