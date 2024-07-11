#include <string>

string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'm'){
            result += (char)(c - 2);
        } else if(c >= 'n' && c <= 'z'){
            result += (char)(c + 20);
        } else {
            result += c;
        }
    }
    return result;
}