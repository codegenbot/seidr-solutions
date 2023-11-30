bool cycpattern_check(string a, string b) {
    int n = a.length();
    int m = b.length();

    if (n < m) {
        return false;
    }

    for (int i = 0; i < n; i++) {
        bool flag = true;
        for (int j = 0; j < m; j++) {
            if (a[(i + j) % n] != b[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            return true;
        }
    }

    return false;
}