```
string camelCase(string s) {
    string result = "";
    bool isNextUpper = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            if (isNextUpper) {
                result += ' ';
                isNextUpper = false;
            }
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (!isNextUpper) {
                result += toupper(s[i]);
                isNextUpper = true;
            } else {
                result += tolower(s[i]);
                isNextUpper = false;
            }
        }
    }
    return result;
}