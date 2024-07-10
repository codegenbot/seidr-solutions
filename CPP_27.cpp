#include <iostream>
#include <cctype>
#include <string>

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            result += toupper(str[i]);
        }
        else{
            result += tolower(str[i]);
        }
    }
    return result;
}