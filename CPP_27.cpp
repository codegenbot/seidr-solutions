#include <iostream>
#include <string>

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z'){
            result += toupper((char)c);
        } else if (c >= 'A' && c <= 'Z') {
            result += tolower((char)c);
        } else {
            result += c;
        }
    }
    return result;
}