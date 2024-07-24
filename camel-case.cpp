#include <string>
#include <cctype>

string camelCase(string s) {
    if (s.empty()) return "";
    
    string result = tolower(s[0]);
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                result += toupper(s[i]);
                i++;
            }
        } else {
            result += s[i];
        }
    }
    return result;
}