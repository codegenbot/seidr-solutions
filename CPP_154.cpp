bool cycpattern_check(string a, string b) {
    int n = a.length();
    int m = b.length();

    if (n < m) {
        return false;
    }

    string temp = b + b;

    for (int i = 0; i <= n - m; i++) {
        string sub = a.substr(i, m);
        if (temp.find(sub) != string::npos) {
            return true;
        }
    }

    return false;
}