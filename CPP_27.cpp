#include <string>

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            result += toupper((char)str[i]);
        }
        else{
            result += tolower((char)str[i]);
        }
    }
    return result;
}