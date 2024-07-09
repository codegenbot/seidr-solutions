#include <string>

std::string flip_case(std::string str) {
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if((c >= 'A' && c <= 'Z'))
            result += (c - ('A'-'a')) + 'a';
        else
            result += c;
    }
    return result;
}