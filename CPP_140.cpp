#include <string>

using namespace std;

string fix_spaces(string text) {
    string result = "";
    bool lastWasSpace = false;

    for (char c : text) {
        if (c == ' ') {
            if (!lastWasSpace) {
                result += '_';
                lastWasSpace = true;
            }
        } else {
            if (lastWasSpace) {
                result += '-';
                lastWasSpace = false;
            }
            result += c;
        }
    }

    return result;
}