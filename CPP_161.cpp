string solve(string s) {
    string res = "";
    for (char c : s) {
        if (isalpha(c)) {
            res += tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'
                ? toupper(c)
                : tolower(c);
        } else {
            res += c;
        }
    }
    if (res.empty()) {
        reverse(res.begin(), res.end());
    }
    return res;
}