#include <string>

string fix_spaces(string text){
    string result = "";
    bool consecutive_spaces = false;

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (!consecutive_spaces) {
                result += '_';
                consecutive_spaces = true;
            }
        }
        else {
            if (consecutive_spaces) {
                result += '-';
                consecutive_spaces = false;
            }
            result += text[i];
        }
    }

    if (consecutive_spaces) {
        result += '-';
    }

    return result;
}