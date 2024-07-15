Here is the solution:

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            result += toupper(s[i]);
        } else if (!result.empty() && isalpha(s[i])) {
            result[0] = tolower(s[i]);
            break;
        } else {
            result += s[i];
        }
    }
    return result;
}