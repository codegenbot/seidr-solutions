Here is the solution:

string camelCase(string s) {
    string result = "";
    int i = 0;
    while (i < s.size()) {
        if (s[i] == '-') {
            i++;
            while (i < s.size() && s[i] != ' ') {
                i++;
            }
        } else {
            if (result.empty()) {
                result += toupper(s[i]);
            } else {
                result += tolower(s[i]);
            }
        }
    }
    return result;
}