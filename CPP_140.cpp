#include <string>

std::string fix_spaces(std::string text){
    std::string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (result.empty() || result.back() != ' ')){
            result += text[i];
        } else if(text[i] == ' ' && result.back() == ' '){
            result.pop_back();
            result += '-';
        } else {
            result += text[i];
        }
    }
    return result;
}