#include<string>
#include<cctype>

string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(isalpha(c)){
            if(islower(c)){
                if(c >= 'n' && c <= 'z'){
                    result += (char)((c - 2 + 26) % 26 + 'a');
                } else {
                    result += (char)(c - 2);
                }
            } else {
                if(c >= 'N' && c <= 'Z'){
                    result += (char)((c - 2 + 26) % 26 + 'A');
                } else {
                    result += (char)(c - 2);
                }
            }
        } else {
            result += c;
        }
    }
    return result;
}