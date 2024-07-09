#include <string>

std::string encrypt(std::string s) {
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'i'){
            result += (char)((s[i]-'a'+3)%26+'a');
        } else if(s[i] >= 'j' && s[i] <= 'm'){
            result += (char)((s[i]-'j'+6)%26+'j');
        } else if(s[i] >= 'n' && s[i] <= 'v'){
            result += (char)((s[i]-'n'+12)%26+'n');
        } else if(s[i] >= 'w' && s[i] <= 'z'){
            result += (char)((s[i]-'w'+24)%26+'w');
        } else {
            result += s[i];
        }
    }
    return result;
}