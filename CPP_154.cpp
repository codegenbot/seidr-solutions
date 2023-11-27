bool cycpattern_check(string a, string b) {
    int n = a.size();
    int m = b.size();

    if (n < m) {
        return false;
    }

    for (int i = 0; i < n; i++) {
        bool found = true;
        for (int j = 0; j < m; j++) {
            if (a[(i + j) % n] != b[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return true;
        }
    }

    return false;
}