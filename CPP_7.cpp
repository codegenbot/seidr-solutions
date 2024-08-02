bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!(find(a[i].begin(), a[i].end(), substring) != string::npos)) {
            return false;
        }
    }
    return true;
}