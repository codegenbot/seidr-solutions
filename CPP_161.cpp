#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

string solve(string s) {
    bool hasLetter = false;
    for (char c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            break;
        }
    }
    if (!hasLetter) {
        reverse(s.begin(), s.end());
        return s;
    }
    for (char &c : s) {
        if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
    }
    return s;
}