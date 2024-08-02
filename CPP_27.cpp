#include <string>

string flip_case(string str){
    string result = "";
    for(char c : str){
        if(c >= 'a' && c <= 'z')
            result += toupper(c);
        else if(c >= 'A' && c <= 'Z')
            result += tolower(c);
        else
            result += c;
    }
    return result;