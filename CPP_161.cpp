#include <string>

std::string solve(std::string s) {
    std::string result = "";
    bool hasLetter = false;
    
    for (char c : s) {
        if (isalpha(c)) { 
            hasLetter = true;
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c; 
        }
    }
    
    return hasLetter ? result : std::string(s.rbegin(), s.rend()); 
}