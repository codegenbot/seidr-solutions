#include <string>
#include <cctype>

string camelCase(string s) {
    string result = "";
    bool nextUpper = true;
    for (char c : s) {
        if (c == '-') {
            nextUpper = true;
        } else if (nextUpper) {
            result += toupper(c);
            nextUpper = false;
        } else {
            result += tolower(c);
        }
    }
    return result;