#include <string>

string fix_spaces(string text){
    string result = "";
    bool consecutiveSpace = false;
    
    for(char c : text){
        if(c == ' '){
            if(consecutiveSpace){
                result += '-';
                consecutiveSpace = false;
            } else {
                result += '_';
                consecutiveSpace = true;
            }
        } else {
            result += c;
            consecutiveSpace = false;
        }
    }
    
    return result;
}