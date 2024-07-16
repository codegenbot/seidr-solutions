Here is the solution:

void toCamelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the '-'
            while (i < s.length() && s[i] == ' ') {
                i++; // skip the spaces
            }
            if (!result.empty()) {
                result += char(toupper(s[i]));
            } else {
                result += s[i];
            }
        } else if (s[i] == ' ') {
            continue; // just ignore the space
        } else {
            if (!result.empty()) {
                result += char(tolower(s[i]));
            } else {
                result += s[i];
            }
        }
    }
    cout << result;
}

int main() {
    string input;
    cin >> input;
    toCamelCase(input);
    return 0;
}