Here is the solution:

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && isspace(s[i])) {
                i++;
            }
            if (!result.empty()) {
                result.push_back(toupper(s[i]));
            } else {
                result += toupper(s[i]);
            }
        } else if (!isspace(s[i])) {
            if (result.empty()) {
                result += tolower(s[i]);
            } else {
                result.push_back(toupper(s[i]));
            }
        }
    }
    return result;
}