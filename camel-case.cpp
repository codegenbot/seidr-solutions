Here is the solution:

string camelCase(string s) {
    string result = "";
    int capitalize = 1;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            capitalize = 1;
        } else if (capitalize && !isupper(s[i])) {
            result += (char)toupper(s[i]);
            capitalize = 0;
        } else {
            result += s[i];
        }
    }
    
    return result;
}

int main() {
    string s;
    while (cin >> s) {
        cout << camelCase(s) << endl;
    }
    return 0;
}