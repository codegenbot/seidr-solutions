string solve(string s) {
    string res = "";
    for (char c : s) {
        if (isalpha(c)) {
            res += toupper(islower(c)) ? tolower(c) : toupper(c);
        } else {
            res += c;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}