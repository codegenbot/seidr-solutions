#include <string>

string solve(string s) {
    string result = "";

    int n = s.length();

    bool hasLetter = false;

    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            hasLetter = true;

            if (islower(s[i])) {
                result += toupper(s[i]);
            } else {
                result += tolower(s[i]);
            }
        } else {
            result += s[i];
        }
    }

    if (!hasLetter) {
        reverse(result.begin(), result.end());
    }

    return result;
}