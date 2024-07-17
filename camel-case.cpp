Here is the solution:

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') i++;
            if (result.length()) {
                result[0] += toupper(s[i]);
                i++;
            }
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (!result.length()) {
                result = toupper(s[i]) + string(s.begin() + i, s.end());
            } else {
                result += tolower(s[i]);
            }
        }
    }
    return result;
}