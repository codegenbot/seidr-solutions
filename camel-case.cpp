using namespace std;

string camelCase(string s) {
    string result = "";
    bool nextUpper = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            if (i < s.length()) {
                if (!nextUpper) {
                    result += tolower(s[i]);
                    nextUpper = true;
                } else {
                    result += toupper(s[i]);
                    nextUpper = false;
                }
            } else break;
        } else if (s[i] == ' ') {
            result += s[i];
            nextUpper = false;
        } else {
            if (!nextUpper) {
                result += tolower(s[i]);
                nextUpper = true;
            } else {
                result += toupper(s[i]);
                nextUpper = false;
            }
        }
    }
    return result;