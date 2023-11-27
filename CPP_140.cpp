#include <string>
#include <cassert>

std::string fix_spaces(std::string text){
    int consecutiveSpaces = 0;
    std::string result = "";

    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' '){
            consecutiveSpaces++;
            if(consecutiveSpaces > 2){
                result += "-";
            }else{
                result += "_";
            }
        }else{
            consecutiveSpaces = 0;
            result += text[i];
        }
    }

    return result;
}