#include <string>

string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (result.empty() || (i > 0 && result.back() != ' ') || i < text.length()-1 && text[i+1] != ' ')){
            result += '_';
        } else {
            result += text[i];
        }
    }
    return result;
}