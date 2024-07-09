string solve(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            char c = tolower(s[i]);
            if (c >= 'a' && c <= 'z') {
                c -= ('a' - 'A');
            }
            result += c;
        } else {
            result += s[i];
        }
    }
    reverse(result.begin(), result.end());
    return result;
}