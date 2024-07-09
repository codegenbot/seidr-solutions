#include <string>

std::string flip_case(std::string str){
    std::string result = "";
    for(char c : str){
        if(islower(c))
            result += toupper(c);
        else 
            result += tolower(c);
    }
    return result;
}