#include <string>
#include <cctype>

std::string flip_case(std::string str){
    std::string result = "";
    for(char c : str){
        if(c >= 'a' && c <= 'z')
            result += std::toupper(c);
        else if(c >= 'A' && c <= 'Z')
            result += std::tolower(c);
        else
            result += c;
    }
    return result;