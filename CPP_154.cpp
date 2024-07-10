bool cycpattern_check(string a, string b) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j <= a.size() - b.size(); j++) {
            bool found = true;
            int k = 0;
            while (k < b.size()) {
                if (a[j + k] != b[k]) {
                    found = false;
                    break;
                }
                k++;
            }
            if (found) return true;
        }
    }
    return false;
}