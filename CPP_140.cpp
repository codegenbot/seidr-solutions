#include <string>

string fix_spaces(string text) {
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            text[i] = '_';
            if (i > 0 && text[i - 1] == '_') {
                text[i] = '-';
            }
        }
    }
    return text;
}