#include <string>

using namespace std;

string solve(string s) {
    string result = "";
    bool hasLetter = false;

    for (char c : s) {
        if (!isalpha(c)) {
            result += c;
            hasLetter = false;
        } else {
            if (hasLetter) {
                result += tolower(c);
            } else {
                result += toupper(c);
                hasLetter = true;
            }
        }
    }

    if (!hasLetter)
        reverse(result.begin(), result.end());

    return result;
}