#include <string>
using namespace std;

string solve(string s) {
    string result = "";
    bool containsLetter = false;

    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            containsLetter = true;
            if (islower(s[i])) {
                result += toupper(s[i]);
            } else {
                result += tolower(s[i]);
            }
        } else {
            result += s[i];
        }
    }

    if (!containsLetter) {
        reverse(result.begin(), result.end());
    }

    return result;
}