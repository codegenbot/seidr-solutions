#include <cctype>

string solve(string s) {
    string result = s;
    bool hasLetter = false;

    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            result[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
            hasLetter = true;
        }
    }

    if (!hasLetter) {
        reverse(result.begin(), result.end());
    }

    return result;
}