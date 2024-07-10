Here is the solution:

string camelCase(string s) {
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            res += toupper(s[++i]);
        } else if (s[i] == ' ') {
            res += " ";
        } else {
            if (res.length() > 0) res[0] = tolower(res[0]);
            res += s[i];
        }
    }
    return res;
}