#include <iostream>
#include <string>
using namespace std;

string solve(string s) {
    string result = "";
    bool hasLetters = false;

    for (char c : s) {
        if (!isalpha(c)) {
            result += c;
            hasLetters = false;
        } else {
            if (!hasLetters) {
                reverse(result.rbegin(), result.rend());
                hasLetters = true;
            }
            c = tolower(c);
            if (!hasLetters) {
                c = toupper(c);
            }
            result += c;
        }
    }

    if (result.empty()) {
        return s;
    } else {
        reverse(result.begin(), result.end());
        return result;
    }
}