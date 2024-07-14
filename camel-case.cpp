Here is the solution:

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            result += toupper(s[i + 1]);
            i++;
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (!result.empty())
                result[0] = tolower(result[0]);
            result += s[i];
        }
    }
    return result;
}