bool cycpattern_check(string a, string b) {
    int n = a.length();
    int m = b.length();

    if (n < m) {
        return false;
    }

    string concat = a + a;
    
    for (int i = 0; i <= n - m; i++) {
        string substring = concat.substr(i, m);
        if (substring == b) {
            return true;
        }
    }
    
    return false;
}