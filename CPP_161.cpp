#include <cctype>
string solve(string s) {
    int len = s.length();
    bool hasLetters = false;

    for (int i = 0; i < len; i++) {
        if (isalpha(s[i])) {
            s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
            hasLetters = true;
        }
    }

    if (!hasLetters) {
        reverse(s.begin(), s.end());
    }

    return s;
}