#include <string>

std::string filp_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        else
            result += c;
    }
    return result;
}