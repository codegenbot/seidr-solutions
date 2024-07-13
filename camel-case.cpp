string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) { 
        if (i == s.size() - 1 || s[i] == '-') { 
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            if (s[i] != '-') {
                string word = s.substr(i + 1);
                result += word;
            } else {
                i++;
            }
        } else if (s[i] == ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += s.substr(0, i);
            result += s.substr(i + 1).substr(0, 1) + tolower(s.substr(i + 1).substr(1));
        } else {
            if (i == 0) {
                result = s[i];
            } else {
                result += s[i];
            }
        }
    }
    return result;
}