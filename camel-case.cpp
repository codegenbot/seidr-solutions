string camelCase(string s) {
    string result = "";
    int j = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            result += toupper(s[++i]);
            while (++i <= s.size() && s[i] != '-' && s[i] != ' ') {
                result += tolower(s[i]);
            }
        } else if (s[i] == ' ') {
            for (; i < s.size() && s[i] == ' '; i++) {}
            j = i;
        } else {
            if (!result.size()) {
                result += toupper(s[i]);
            } else {
                result += tolower(s[i]);
            }
        }
    }
    return result;
}