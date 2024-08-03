Here is the solution:

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.size() && s[i] != ' ') {
                result += toupper(s[i]);
                i++;
            }
            result += ' ';
        } else if (s[i] == ' ') {
            continue;
        } else {
            result += tolower(s[i]);
        }
    }
    return result.substr(0, result.size() - 1);
}