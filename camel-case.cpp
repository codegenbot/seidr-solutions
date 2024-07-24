#include <string>

string camelCase(string s) {
    string result = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            result += toupper(s[i]);
            i++;
            while (i < s.length() && s[i] != ' ') {
                result += tolower(s[i]);
                i++;
            }
        } else {
            result += tolower(s[i]);
            i++;
        }
    }
    return result;
}