#include <string>

using namespace std;

string solve(string s) {
    string res = "";
    bool found_letter = false;

    for (char c : s) {
        if (isalpha(c)) {
            found_letter = true;
            res += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            res += c;
        }
    }

    return found_letter ? res : string(rbegin(s), rend(s));
}