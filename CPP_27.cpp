#include <string>
#include <cctype>

std::string flipCase(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(std::isalpha(str[i])){ 
            if(std::isupper(str[i])){
                result += tolower(str[i]);
            }else{
                result += toupper(str[i]);
            }
        } else {
            result += str[i];
        }
    }
    return result;
}