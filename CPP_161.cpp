#include <string>

string solve(string s) {
    int n = s.length();
    
    // check if the string contains any letters
    bool containsLetters = false;
    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            containsLetters = true;
            break;
        }
    }
    
    // if the string contains no letters, reverse the string
    if (!containsLetters) {
        reverse(s.begin(), s.end());
        return s;
    }
    
    // reverse the case of letters
    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    
    return s;
}