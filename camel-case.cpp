#include <string>
#include <cctype>

string camelCase(string s) {
    if (s[0] == '-') i++; 
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                result += toupper(s[i]);
                i++;
            }
            result += " ";
        } else {
            if (!result.empty()) {
                result += toupper(s[i]);
            } else {
                result += tolower(s[i]);
            }
        }
    }
    return result;
}