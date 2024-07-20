string solve(string s) {
    string res = "";
    for (char c : s) {
        if (!isalpha(c)) {
            res += c;
        } else {
            res += (c >= 'a' && c <= 'z') ? char(c - ('a' - 'A')) : char(c + ('a' - 'A'));
        }
    }
    return res.empty() ? string(s).reverse() : res;
}