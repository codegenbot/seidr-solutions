#include <string>

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            c = toupper((char)c);
        else if(c >= 'A' && c <= 'Z')
            c = tolower((char)c);
        result += (char)c;
    }
    return result;
}