#include <string>
#include <cctype>

std::string flip_case(std::string str);

std::string flip_case(std::string str){
    if(str.empty()) {
        return "Error: Input string is empty.";
    }
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            result += toupper(str[i]);
        else
            result += tolower(str[i]);
    }
    return result;
}