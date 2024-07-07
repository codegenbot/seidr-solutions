#include <string>

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z'){
            result += (c <= 'n') ? tolower(c) : toupper(c);
        } else if(c >= 'A' && c <= 'Z'){
            result += (c <= 'N') ? tolower(c) : toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}