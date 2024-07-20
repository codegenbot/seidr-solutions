Here is the solution:

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // skip "-"
            while (i < s.size() && isspace(s[i])) i++; // skip spaces
            char c = toupper(s[i]);
            result += c;
            i--; // back to the last letter before "-"
        } else if (!isspace(s[i])) {
            char c = (s[i] >= 'a' && s[i] <= 'z') ? toupper(s[i]) : s[i];
            result += c;
        }
    }
    return result;
}