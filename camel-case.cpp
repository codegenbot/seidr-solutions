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
                result += toupper(s.substr(i, s.find(' ', i) - i));
            else
                result = tolower(s.substr(i, s.find(' ', i) - i));
            i += (s.find(' ', i) - i);
        } else if (!result.empty()) {
            if (isalpha(s[i]))
                result += tolower(s[i]);
            else
                result += s[i];
        } else {
            if (isalpha(s[i]))
                result += tolower(s[i]);
            else
                result += s[i];
        }
    }
    return result;
}