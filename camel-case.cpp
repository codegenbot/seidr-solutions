int main() {
    string camelCase(string s) {
        string result = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '-') {
                i++; // skip the dash
                while (i < s.length() && isspace(s[i])) i++; // skip spaces
                char firstChar = toupper(s[i]);
                result += firstChar;
                i--; // go back to the previous character
            } else if (!isspace(s[i])) {
                if (result != "") {
                    result[0] = tolower(result[0]); // make it lowercase
                }
                result += s[i];
            }
        }
        return result;
    }

    cout << camelCase("camel-case example-test-string") << endl;

    return 0;
}