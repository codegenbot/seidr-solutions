#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                result += toupper(s[i]);
                i++;
            }
        } else if (!result.empty()) {
            result += toupper(s[i]);
        } else {
            result += tolower(s[i]);
        }
    }
    return result;
}