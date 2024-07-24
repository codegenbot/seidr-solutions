int main() {
    string camelCase(string s) {
        string result = "";
        int i = 0;
        while (i < s.length()) {
            if (s[i] == '-') {
                i++;
                while (i < s.length() && s[i] != ' ') {
                    i++;
                }
                if (result.back() != ' ')
                    result += s.substr(i, s.find(' ', i) - i);
                else
                    result += s.substr(i, s.find(' ', i) - i).substr(1);
            } else if (!result.length()) {
                result = s.substr(i, 1);
            } else {
                if (s[i] == ' ')
                    continue;
                result += toupper(s[i]);
            }
            i++;
        }
        return result;
    }
    string input;
    cout << "Enter a kebab-case string: ";
    cin >> input;
    cout << "The camelCase version is: " << camelCase(input) << endl;
    return 0;
}