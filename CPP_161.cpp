#include <algorithm>
#include <cctype>

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    if (result.length() == 0 || all_of(result.begin(), result.end(), ::isalpha)) {
        reverse(result.begin(), result.end());
    }
    return result;
}