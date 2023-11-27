bool cycpattern_check(string a, string b) {
    int n = a.length();
    int m = b.length();

    if (m == 0) {
        return false;
    }
    
    for (int i = 0; i < n; i++) {
        bool isPattern = true;
        
        for (int j = 0; j < m; j++) {
            if (a[(i + j) % n] != b[j]) {
                isPattern = false;
                break;
            }
        }
        
        if (isPattern) {
            return true;
        }
    }

    return false;
}