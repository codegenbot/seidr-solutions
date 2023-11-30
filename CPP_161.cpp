#include <string>

string solve(string s) {
    string result = "";
    
    // Check if the string contains any letters
    bool hasLetters = false;
    for (char c : s) {
        if (isalpha(c)) {
            hasLetters = true;
            break;
        }
    }
    
    // If the string contains no letters, reverse the string
    if (!hasLetters) {
        for (int i = s.length() - 1; i >= 0; i--) {
            result += s[i];
        }
        return result;
    }
    
    // Reverse the case of letters
    for (char c : s) {
        if (islower(c)) {
            result += toupper(c);
        } else if (isupper(c)) {
            result += tolower(c);
        } else {
            result += c;
        }
    }
    
    return result;
}