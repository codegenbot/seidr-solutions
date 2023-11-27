bool cycpattern_check(string a, string b) {
    int n = a.length();
    int m = b.length();

    if (n < m) {
        return false;
    }

    for (int i = 0; i <= n - m; i++) {
        string sub = a.substr(i, m);
        if (sub == b) {
            return true;
        }
    }

    return false;
}