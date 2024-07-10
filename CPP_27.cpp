#include <iostream>
#include <cctype>
#include <string>

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(std::isalpha(str[i])){
            if(std::islower(str[i]))
                result += toupper(str[i]);
            else
                result += tolower(str[i]);
        }
        else
            result += str[i];
    }
    return result;
}