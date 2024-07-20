Here is the completed code:

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            if (result != "") {
                result += char(toupper(s[i]));
            } else {
                result = toupper(s[i]) + "";
            }
        } else if (s[i] == ' ') {
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            if (result != "") {
                result += char(toupper(s[i]));
            } else {
                result = toupper(s[i]) + "";
            }
        } else {
            if (result != "") {
                result += tolower(s[i]);
            } else {
                result = tolower(s[i]) + "";
            }
        }
    }
    return result;
}