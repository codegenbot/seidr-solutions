#include <iostream>
#include <string>

std::string fix_spaces(std::string text) {
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            text[i] = '_';
            int count = 1;
            while (i + count < text.length() && text[i + count] == ' ') {
                count++;
            }
            if (count > 2) {
                text.replace(i, count, "-");
            }
        }
    }
    return text;
}