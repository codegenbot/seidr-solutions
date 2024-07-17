#include <string>
using namespace std;

string toCamelCase(string s) {
    string result;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                i++;
            }
        } else if (!result.empty()) {
            result[0] = toupper(s[i]);
            result += lowercase(s[i+1]);
            i++;
        } else {
            result += tolower(s[i]);
            i++;
        }
    }
    return result;
}

string lowercase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return string(1, c + ('a' - 'A'));
    } else {
        return string(1, c);
    }
}