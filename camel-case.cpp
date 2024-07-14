Here is the solution:

string camelCase(string s) {
    string result = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '-') {
            for (++i; i < s.length() && s[i] != '-'; ++i) {}
            if (!result.empty())
                result += char(toupper(s[i]));
            else
                result += s[i];
        } else if (s[i] == ' ') {
            result += ' ';
            while (i < s.length() && s[i] == ' ')
                i++;
        } else {
            if (result.empty())
                result = toupper(s[i]);
            else
                result += tolower(s[i]);
        }
    }
    return result;
}