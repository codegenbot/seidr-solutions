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
                result.push_back(toupper(s[i]));
            else
                result += " " + toupper(s[i]);
            i = s.find(' ', i);
        } else if (!result.empty()) {
            if (s[i] == ' ')
                continue;
            result.push_back(toupper(s[i]));
        } else {
            result += tolower(s[i]);
        }
        i++;
    }
    return result;
}