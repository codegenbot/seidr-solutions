string solve(string s) {
    string res = "";
    for (char c : s) {
        if (isalpha(c)) {
            res += (c >= 'a' && c <= 'z') ? char(c - ('a' - 'A')) : char(c + ('a' - 'A'));
        } else {
            res += c;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}