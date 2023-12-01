#include <string>
#include <algorithm>

string solve(string s) {
    if (s.empty()) {
        return s;
    }

    bool hasLetters = false;
    
    for (char& c : s) {
        if (isalpha(c)){
            c = islower(c) ? toupper(c) : tolower(c);
            hasLetters = true;
        }
    }
    
    if (!hasLetters) {
        reverse(s.begin(), s.end());
    }
    
    return s;
}