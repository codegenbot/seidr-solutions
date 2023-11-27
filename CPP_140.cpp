#include <string>

string fix_spaces(string text) {
    string result;
    int consecutiveSpaces = 0;

    for (char c : text) {
        if (c == ' ') {
            consecutiveSpaces++;
            if (consecutiveSpaces > 2) {
                result += "-";
            } else {
                result += "_";
            }
        } else {
            result += c;
            consecutiveSpaces = 0;
        }
    }

    return result;
}