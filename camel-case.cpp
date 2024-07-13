```
string camelCase(string s) {
    string result = "";
    int i;
    for (i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            if (result.size()) {
                result[0] = toupper(result[0]);
            }
            result += s.substr(i + 1);
            i++;
        } else if (s[i] == ' ') {
            if (i > 0) {
                result[0] = toupper(result[0]);
            }
            result += s.substr(0, i);
            result.erase(0, i);
            i--;
        } else {
            if (result.size() == 0)
                result += s[i];
            else
                result += toupper(s[i]);
        }
    }
    // Capitalize the first letter of the last word
    if (!result.empty()) {
        result[0] = toupper(result[0]);
    }
    return result;
}