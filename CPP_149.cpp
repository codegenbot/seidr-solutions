bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        string s1 = "";
        for (char c : a[i]) {
            if (isdigit(c)) {
                s1 += c;
            }
        }
        string s2 = "";
        for (char c : b[i]) {
            if (isdigit(c)) {
                s2 += c;
            }
        }
        if (s1 != s2) return false;
    }
    return true;