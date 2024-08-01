Here is the solution:

string camelCase(string s) {
    string res = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            if (i > 0 && s[i - 1] != ' ') {
                res += toupper(s[i + 1]);
                i++;
            }
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (res.size() == 0) {
                res += tolower(s[i]);
            } else {
                res += toupper(s[i]);
            }
        }
    }
    return res;
}