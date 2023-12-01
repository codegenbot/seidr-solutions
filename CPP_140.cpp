#include <string>

string fix_spaces(string text){
    string result = "";
    int count = 0;
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            count++;
            if(count > 2){
                result += "-";
                count = 0;
            }
        }
        else{
            if(count > 0){
                result += "_";
                count = 0;
            }
            result += text[i];
        }
    }
    if(count > 0){
        result += "_";
    }
    return result;
}