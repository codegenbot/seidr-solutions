#include <string>

string encrypt(string s){
    string result = "";
    for(char c : s){
        if(c >= 'a' && c <= 'z'){
            c = (c - 'a' + 26) % 26;
            c += 'a';
        } else if(c >= 'A' && c <= 'Z'){
            c = (c - 'A' + 26) % 26;
            c += 'A';
        }
        result += c;
    }
    return result;
}