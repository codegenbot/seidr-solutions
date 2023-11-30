#include <string>

string fix_spaces(string text) {
    int count = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            count++;
            if (count > 2) {
                text.replace(i, 1, "-");
                count = 1;
            } else {
                text.replace(i, 1, "_");
            }
        } else {
            count = 0;
        }
    }
    return text;
}