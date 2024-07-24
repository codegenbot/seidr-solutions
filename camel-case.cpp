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
                result += toupper(s.substr(i, s.find(' ', i) - i).substr(0, 1));
            else
                result += s.substr(i, s.find(' ', i) - i);
            i = s.find(' ', i);
        } else if (!result.empty()) {
            result += tolower(s[i]);
        } else {
            result += toupper(s[i]);
        }
        i++;
    }
    return result;
}