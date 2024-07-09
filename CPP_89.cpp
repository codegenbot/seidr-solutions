#include<string>
#include<cctype>

string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            char c = tolower(s[i]);
            if(c >= 'a' && c <= 'm'){
                result += (char)(c - 2);
            } else if(c >= 'n' && c <= 'z'){
                result += (char)((c - 2 + 26) % 26 + 'a' - 1);
            }
        } else {
            result += s[i];
        }
    }
    return result;
}