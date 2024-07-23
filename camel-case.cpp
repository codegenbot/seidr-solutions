Here is the solution:

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            if (i > 0 && s[i - 1] != ' ') {
                result += toupper(s[i + 1]);
                i++;
            } else {
                result += s[i];
            }
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (result.size() > 0) {
                result[0] = tolower(s[i]);
            } else {
                result += tolower(s[i]);
            }
        }
    }
    return result;
}