#include <algorithm>

string flip_case(string str){
    string result = "";
    for(char c : str){
        if(isupper(c)){
            result += tolower(c);
        }else{
            result += toupper(c);
        }
    }
    return result;
}