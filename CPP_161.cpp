#include <algorithm>
using namespace std;

string solve(string s) {
    string result = "";
    bool hasLetter = false;
    
    for(int i=0; i<s.size(); i++) {
        if(isalpha(s[i])) { 
            result += (islower(s[i]) ? toupper(s[i]) : tolower(s[i]));
            hasLetter = true;
        } else {
            result += s[i];
        }
    }
    
    if(!hasLetter) {
        reverse(result.begin(), result.end());
    }
    
    return result;
}