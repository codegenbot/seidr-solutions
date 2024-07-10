#include <string>

std::string fix_spaces(std::string text){
    std::string result = "";
    bool prevSpace = false;

    for(char c : text) {
        if(c == ' ') {
            if(prevSpace) {
                result += "-";
            } else {
                result += "_";
            }
            prevSpace = true;
        } else {
            result += c;
            prevSpace = false;
        }
    }

    return result;
}