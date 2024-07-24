```c++
string camelCase(string s) {
    string result = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                result += toupper(s[i]);
                i++;
            }
            if (i < s.length()) {
                result += capitalize(s[i]);
            }
        } else {
            if (result.empty()) {
                result += tolower(s[i]);
            } else {
                result += capitalize(s[i]);
            }
        }
    }
    return result;
}

string capitalize(char c) {
    return (c >= 'a' && c <= 'z') ? (char)(c - ('a' - 'A')) : c;
}