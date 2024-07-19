bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (find(a[i].begin(), a[i].end(), ' ') == a[i].end() &&
            find(b[i].begin(), b[i].end(), ' ') == b[i].end()) {
            return false;
        }
    }
    for (int i = 0; i < a.size(); i++) {
        if (find(a[i].begin(), a[i].end(), ' ') != a[i].end() &&
            find(b[i].begin(), b[i].end(), ' ') != b[i].end()) {
            return false;
        }
    }
    for (int i = 0; i < a.size(); i++) {
        if (count(a[i].begin(), a[i].end(), ' ') > n) {
            return false;
        }
    }
    return true;
}