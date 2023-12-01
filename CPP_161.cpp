#include <string>
#include <algorithm>

string solve(string s){
    bool hasLetter = false;
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            hasLetter = true;
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    if (!hasLetter) {
        reverse(s.begin(), s.end());
    }
    return s;
}