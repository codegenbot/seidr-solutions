#include <iostream>
#include <cctype>
#include <string>

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(std::isalpha(str[i])){
            char c = (std::isupper(str[i])) ? tolower(str[i]) : toupper(str[i]);
            result += c;
        } else {
            result += str[i];
        }
    }
    return result;
}