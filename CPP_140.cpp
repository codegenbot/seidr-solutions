#include <string>

string fix_spaces(string text) {
    string result = "";
    bool spaceFound = false;

    for(int i=0; i < text.length(); i++){
        if(text[i] == ' '){
            if(spaceFound) {
                result += '-';
                spaceFound = false;
            } else {
                if(result.length() > 0) result += '_';
                result += ' ';
                spaceFound = true;
            }
        } else {
            result += text[i];
            spaceFound = false;
        }
    }

    return result;
}