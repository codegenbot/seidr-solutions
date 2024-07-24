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
                result += s.substr(i, 1);
            while (i < s.length() && s[i] != ' ') {
                i++;
            }
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