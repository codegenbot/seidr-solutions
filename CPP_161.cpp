#include <string>

string solve(string s) {
    string result = "";
    bool containsLetter = false;
    
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) { // if s[i] is a letter
            containsLetter = true;
            
            if (islower(s[i])) { // if s[i] is lowercase
                result += toupper(s[i]); // convert to uppercase
            } else {
                result += tolower(s[i]); // convert to lowercase
            }
        } else {
            result += s[i]; // keep non-letter characters as it is
        }
    }
    
    if (!containsLetter) {
        reverse(result.begin(), result.end()); // reverse the string
    }
    
    return result;
}