Here is the solution:

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // skip the '-'
            while (i < s.size() && s[i] == ' ') {
                i++; // skip the spaces
            }
            if (result != "") {
                result += char(toupper(s[i]));
            } else {
                result += s[i];
            }
        } else {
            if (s[i] == ' ') {
                continue;
            }
            if (result == "") {
                result = s[i];
            } else {
                result += char(tolower(s[i]));
            }
        }
    }
    return result;
}