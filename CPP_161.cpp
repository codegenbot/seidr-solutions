string solve(string s) {
    string res = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            res += c;
        } else {
            res += c;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}