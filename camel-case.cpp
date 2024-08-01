Here is the solution:

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            if (i > 0 && s[i - 1] != ' ') {
                result += toupper(s[i + 1]);
                i++;
            }
        } else if (s[i] == ' ') {
            if (result.length() > 0) {
                result += toupper(s[i + 1]);
            } else {
                result += s[i];
            }
        } else {
            result += tolower(s[i]);
        }
    }
    return result;
}