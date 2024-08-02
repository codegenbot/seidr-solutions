#include <string>

string fix_spaces(string text){ 
    string result = "";
    bool skipSpace = false;

    for(int i=0; i<text.length(); i++){
        if(skipSpace){
            if(text[i] == ' ')
                continue;
            else{
                result += '-';
                skipSpace = false;
            }
        }else{
            if(text[i] == ' '){
                if(result.length() > 0 && result.back() != ' ')
                    result += '_';
                else
                    continue;
            }else
                result += text[i];
        }
    }

    return result;
}