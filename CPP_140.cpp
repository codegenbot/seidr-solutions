#include <string>

std::string fix_spaces(std::string text){
    std::string result = "";
    int consecutiveSpaces = 0;
    for(char c : text){
        if(c == ' '){
            consecutiveSpaces++;
            if(consecutiveSpaces > 2){
                result += "-";
                consecutiveSpaces = 1;
            } else {
                result += "_";
            }
        } else {
            result += c;
            consecutiveSpaces = 0;
        }
    }
    return result;
}