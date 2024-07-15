Here is the completed code:

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            result += s[++i]. toupper();
        } else if (result.empty()) {
            result += s[i];
        } else {
            result += tolower(s[i]);
        }
    }
    return result;
}