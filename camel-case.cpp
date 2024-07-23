```
string camelCase(string s) {
    string result = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                i++;
            }
            if (result.length() > 0) {
                result += toupper(s[i]);
            } else {
                result += s[i];
            }
        } else {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += s[i];
        }
        i++;
    }
    return result;
}