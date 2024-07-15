#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == '-') {
            if (result.empty()) {
                result = toUpperCase(s.substr(i+1, s.length()-i-1));
            } else {
                result += toUpperCase(s.substr(i+1, s.length()-i-1));
            }
            i += s[i] == '-' ? 0 : s.length() - i;
        }
    }
    return result;
}

string toUpperCase(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= ('a'-'A');
        }
    }
    return s;
}