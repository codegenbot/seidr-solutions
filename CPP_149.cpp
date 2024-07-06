bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        sort({a[i], b[i]});
        if (a[i] > b[i]) return false;
    }
    return true;
}