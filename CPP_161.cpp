string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            if (c >= 'a' && c <= 'z') {
                c -= ('a' - 'A');
            }
        } else {
            result += c;
        }
    }
    reverse(result.begin(), result.end());
    return s;
}