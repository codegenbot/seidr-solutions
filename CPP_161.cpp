#include <string>
#include <algorithm>

string solve(string s) {
    string res = "";
    bool has_letter = false;
    
    for (char c : s) {
        if (isalpha(c)) {
            has_letter = true;
            res += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            res += c;
        }
    }
    
    return has_letter ? res : string(rbegin(s), rend(s));
}