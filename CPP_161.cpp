#include <string>
using namespace std;

string solve(string s) {
    string result = "";

    bool containsLetter = false;
    for (char c : s) {
        if (isalpha(c)) {
            containsLetter = true;
            if (islower(c)) {
                result += toupper(c);
            } else {
                result += tolower(c);
            }
        } else {
            result += c;
        }
    }

    if (!containsLetter) {
        reverse(result.begin(), result.end());
    }

    return result;
}