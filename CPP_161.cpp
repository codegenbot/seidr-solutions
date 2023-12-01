#include <string>
using namespace std;

string solve(string s) {
    string result = "";
    bool containsLetter = false;
    
    // Check if the string contains any letters
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            containsLetter = true;
            break;
        }
    }
    
    // If the string contains no letters, reverse the string
    if (!containsLetter) {
        for (int i = s.length() - 1; i >= 0; i--) {
            result += s[i];
        }
    }
    else {
        // Reverse the case of letters
        for (int i = 0; i < s.length(); i++) {
            if (islower(s[i])) {
                result += toupper(s[i]);
            }
            else if (isupper(s[i])) {
                result += tolower(s[i]);
            }
            else {
                result += s[i];
            }
        }
    }
    
    return result;
}