string camelCase(string s) {
    int i = 0;
    string result = "";
    for (i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; 
            while (i < s.length() && s[i] != ' ') {
                result += toupper(s[i]);
                i++;
            }
            result += " ";
        } else {
            result += tolower(s[i]);
        }
    }
    return result;
}