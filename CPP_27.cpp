#include <string>
#include <cctype>

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            result += std::toupper(str[i]);
        else if(str[i] >= 'A' && str[i] <= 'Z')
            result += std::tolower(str[i]);
        else
            result += str[i];
    }
    return result;
}