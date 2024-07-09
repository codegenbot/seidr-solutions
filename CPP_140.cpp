#include <string>

std::string fix_spaces(std::string text){
    std::string result = "";
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' ' && (i == 0 || text[i-1] != ' ') && (i == text.length() - 1 || text[i+1] != ' ')){
            result += '_';
        } else if(text[i] == ' '){
            bool is_consecutive = true;
            for(int j = i + 1; j < text.length(); j++){
                if(text[j] != ' ') {
                    is_consecutive = false;
                    break;
                }
            }
            if(is_consecutive) {
                result += '-';
                i = j - 1;
            } else {
                result += '_';
            }
        } else {
            result += text[i];
        }
    }
    return result;
}