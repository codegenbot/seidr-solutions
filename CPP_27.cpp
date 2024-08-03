#include <string>

string flip_case(string str){
    string result = "";
    for(char c : str){
        if(c >= 'a' && c <= 'z'){
            result += toupper(c);
        } else {
            result += tolower(c);
        }
    }
    return result;
}