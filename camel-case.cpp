#include <string>
#include <cctype>

string camelCase(string s) {
    string result = "";
    bool capitalizeNextLetter = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            capitalizeNextLetter = true;
        } else if (capitalizeNextLetter) {
            result += toupper(s[i]);
            capitalizeNextLetter = false;
        } else {
            result += tolower(s[i]);
        }
    }
    return result;