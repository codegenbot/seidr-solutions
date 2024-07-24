```c++
string camelCase(string s) {
    string result = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                i++;
            }
            if (!result.empty())
                result += toupper(s[i]);
            else
                result = tolower(s.substr(i, s.find(' ', i) - i));
        } else if (!result.empty()) {
            if (s[i] == ' ')
                continue;
            result += toupper(s[i]);
        } else {
            result += tolower(s[i]);
        }
        i++;
    }
    return result;
}