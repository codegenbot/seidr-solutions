#include <string>

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            c = (char)tolower(c);
        else if(c >= 'A' && c <= 'Z')
            c = (char)toupper(c);
        result += c;
    }
    return result;
}