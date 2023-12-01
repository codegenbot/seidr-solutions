#include <string>

string encrypt(string s) {
    string result = "";
    
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        
        // Shift down the uppercase letters
        if (c >= 'A' && c <= 'Z') {
            c = 'A' + (((c - 'A') + (2 * 2)) % 26);
        }
        
        // Shift down the lowercase letters
        if (c >= 'a' && c <= 'z') {
            c = 'a' + (((c - 'a') + (2 * 2)) % 26);
        }
        
        result += c;
    }
    
    return result;
}