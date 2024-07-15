```
string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // skip the '-'
            while(i < s.size() && s[i] != '-' && s[i] != ' ') {
                if (i == 0) {
                    result += toupper(s[i]);
                } else {
                    result += tolower(s[i]);
                }
                i++;
            }
        } else if (s[i] == ' ') {
            for (int j = i + 1; j < s.size(); ) {
                if (s[j] == ' ') {
                    break;
                }
                if (j == i + 1) {
                    result += toupper(s[j]);
                } else {
                    result += tolower(s[j]);
                }
                j++;
            }
            i = j - 1;
        } else {
            if (i > 0) {
                result += tolower(s[i]);
            } else {
                result += toupper(s[i]);
            }
        }
    }
    return result;
}