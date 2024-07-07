string solve(string s) {
    string res = "";
    for (char c : s) {
        if (isalpha(c)) {
            res += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            res += c;
        }
    }
    if (!any(isalpha, s)) {
        reverse(res.begin(), res.end());
    }
    return res;
}