#include <string>
using namespace std;

string solve(string s) {
    string result = "";
    bool hasLetters = false;

    for (char c : s) {
        if (!isalpha(c)) {
            result += c;
        } else {
            hasLetters = true;
            result += (c >= 'a' && c <= 'z') ? char(c - ('a' - 'A')) : char(c);
        }
    }

    return hasLetters ? s : string(rbegin(s), rend(s));
}