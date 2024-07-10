bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i].length() != b[i].length()) return false;
        if (a[i] > b[i]) return false;
        if (a[i] < b[i]) return true;
    }
    return true;
}