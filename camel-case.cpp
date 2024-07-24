```c++
string camelCase(string s) {
    string result = "";
    bool capitalizeNextWord = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            capitalizeNextWord = true;
            i++;
            while (i < s.length() && s[i] != ' ') {
                result += toupper(s[i]);
                i++;
            }
        } else if (capitalizeNextWord) {
            result += toupper(s[i]);
            capitalizeNextWord = false;
        } else {
            result += tolower(s[i]);
        }
    }
    return result;
}