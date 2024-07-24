string camelCase(string s) {
    string result = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                i++;
            }
            if (result.back() != ' ')
                result += toupper(s.substr(i, s.find(' ', i) - i));
            else
                result += toupper(s.substr(i, s.find(' ', i) - i).substr(1));
        } else if (!result.length()) {
            result = s.substr(i, 1);
        } else {
            if (s[i] == ' ')
                continue;
            result += tolower(s[i]);
        }
        i++;
    }
    return result;
}