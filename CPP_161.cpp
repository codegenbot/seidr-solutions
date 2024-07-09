#include <string>

using namespace std;

string solve(string s) {
    string result = "";
    bool hasLetter = false;

    for (int i = 0; i < s.length(); i++) {
        if (!isalpha(s[i])) {
            result += s[i];
        } else {
            if (hasLetter) {
                result += tolower(toupper(s[i]));
            } else {
                hasLetter = true;
                result += islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
            }
        }
    }

    if (!hasLetter)
        reverse(result.begin(), result.end());

    return result;
}