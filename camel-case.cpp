Here is the solution:

void toCamelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            if (i > 0) {
                result += toupper(s[i-1]);
            }
            i++;
        } else if (s[i] == ' ') {
            for (int j = i + 1; j <= s.find('-', i); j++) {
                if (j > i) {
                    result += tolower(s[j]);
                } else {
                    result += toupper(s[j]);
                }
            }
            i = s.find('-', i);
        } else {
            if (!result.size()) {
                result += tolower(s[i]);
            } else {
                result += toupper(s[i]);
            }
        }
    }
    cout << result;
}