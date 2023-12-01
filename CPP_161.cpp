#include <cctype>

string solve(string s){
    string result = "";
    bool hasLetter = false;
    
    for (char c : s){
        if (isalpha(c)){
            hasLetter = true;
            if (islower(c)){
                result += toupper(c);
            }
            else{
                result += tolower(c);
            }
        }
        else{
            result += c;
        }
    }
    
    if (!hasLetter){
        reverse(result.begin(), result.end());
    }
    
    return result;
}