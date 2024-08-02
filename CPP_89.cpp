#include <string>

string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'm'){
            c += 2;
        } else if(c >= 'n' && c <= 'z'){
            c -= 26;
            c += 2;
        }
        result += c;
    }
    return result;
}