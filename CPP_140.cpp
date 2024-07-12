#include <string>

string fix_spaces(string text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (i < text.length() - 1 && text[i + 1] == ' ' && text.find(' ', i + 2) != string::npos) {
                result += '-';
            } else {
                result += '_';
            }
        } else {
            result += text[i];
        }
    }
    return result;