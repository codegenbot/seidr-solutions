Here is the solution:

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && isspace(s[i])) i++;
            if (i < s.length()) {
                if (!result.empty()) {
                    result += char(toupper(s[i]));
                } else {
                    result = toupper(s[i]) + "";
                }
            }
        } else if (!isspace(s[i])) {
            if (!result.empty() && !isspace(result.back())) {
                result += char(toupper(s[i]));
            } else {
                result += tolower(s[i]);
            }
        }
    }
    return result;
}