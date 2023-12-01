#include <string>

std::string fix_spaces(std::string text);

std::string fix_spaces(std::string text) {
    std::string result = "";
    int count = 0;
    
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' '){
            count++;
            if(count > 2){
                result += "-";
            }else{
                result += "_";
            }
        }else{
            result += text[i];
            count = 0;
        }
    }
    
    return result;
}