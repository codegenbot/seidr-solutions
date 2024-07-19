#include <algorithm>

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i'
                || tolower(c) == 'o' || tolower(c) == 'u' ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    if (result.empty()) {
        reverse(result.begin(), result.end());
    }
    return result;
}