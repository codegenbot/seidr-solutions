string solve(string s) {
    string res = "";
    for (char c : s) {
        if (!isalpha(c)) {
            res += c;
        } else {
            res += tolower(c) == 'a' ? toupper(c) : tolower(c);
        }
    }
    return res.empty() ? s.substr(1, s.size()-1) + s[0] : res;
}