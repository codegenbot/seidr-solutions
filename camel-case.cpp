Here is the solution:

void toCamelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.size() && s[i] == ' ') {
                i++;
            }
            if (result != "") {
                result += char(toupper(s[i]));
            } else {
                result = toupper(s[i]) + "";
            }
        } else {
            if (s[i] == ' ') {
                while (i < s.size() && s[i] == ' ') i++;
            } else {
                if (result != "") {
                    result += tolower(s[i]);
                } else {
                    result = tolower(s[i]) + "";
                }
            }
        }
    }
    cout << result << endl;
}

int main() {
    string s;
    while (cin >> s) {
        toCamelCase(s);
    }
    return 0;
}