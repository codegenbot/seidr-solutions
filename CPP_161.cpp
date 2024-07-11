#include <algorithm>
using namespace std;

string solve(string s) {
    string res = "";
    bool hasLetter = false;
    for (char c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            res += toupper(c) - ('A'-'a') * islower(c);
        } else {
            res += c;
        }
    }
    return hasLetter ? res : string(rbegin(s), rend(s));
}