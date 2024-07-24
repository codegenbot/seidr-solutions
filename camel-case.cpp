#include <string>
#include <cctype>

string camelCase(string s) {
    if (s.empty()) return s;

    string result = "";
    bool nextIsCap = true;

    for (char c : s) {
        if (c == '-') {
            nextIsCap = true;
        } else if (nextIsCap) {
            result += toupper(c);
            nextIsCap = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}