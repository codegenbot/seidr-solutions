#include <string>
#include <cctype>

string solve(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            result += (s[i] >= 'a' && s[i] <= 'z') ? toupper(s[i]) : tolower(s[i]);
        } else {
            result += s[i];
        }
    }
    if (!any_of(s.begin(), s.end(), ::isalpha)) {
        reverse(result.begin(), result.end());
    }
    return result;