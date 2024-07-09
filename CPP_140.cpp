#include <string>

std::string fix_spaces(std::string text){
    std::string result = "";
    bool previousSpaceWasConsecutive = false;

    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            if(previousSpaceWasConsecutive){
                result += "-";
                previousSpaceWasConsecutive = false;
            } else {
                result += "_";
                previousSpaceWasConsecutive = true;
            }
        } else {
            result += text[i];
            previousSpaceWasConsecutive = false;
        }
    }

    return result;
}