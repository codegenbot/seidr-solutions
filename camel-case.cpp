string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            result += toupper(s[i]);
        } else if (s[i] != ' ') {
            if (result.length() > 0) {
                result[0] = tolower(result[0]);
            }
            result += s[i];
        } else {
            if (result.length() > 0) {
                result[0] = tolower(result[0]);
            }
            result += " ";
        }
    }
    return result;