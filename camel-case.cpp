Here is the solution:

string camelCase(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == '-') {
            i++;
            continue;
        }
        char c = topper(str[i]);
        if (!result.empty())
            result += char(c);
        else
            result += toupper(str[i]);
        for (++i; i < str.length() && str[i] != '-'; ++i)
            result += tolower(str[i]);
    }
    return result;
}