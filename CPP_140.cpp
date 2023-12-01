#include <algorithm>
#include <string>

string fix_spaces(string text) {
    string result;
    bool consecutive_spaces = false;

    for (char ch : text) {
        if (ch == ' ') {
            if (consecutive_spaces) {
                result += '-';
            } else {
                result += '_';
                consecutive_spaces = true;
            }
        } else {
            result += ch;
            consecutive_spaces = false;
        }
    }

    return result;
}