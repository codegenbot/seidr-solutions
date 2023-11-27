#include <string>

string fix_spaces(string text){
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            text[i] = '_';
            if(i+1<text.length() && text[i+1] == ' '){
                text[i] = '-';
                while(i+1<text.length() && text[i+1] == ' '){
                    text.erase(i+1, 1);
                }
            }
        }
    }
    return text;
}