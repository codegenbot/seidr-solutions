bool issame(vector<string> a, vector<string> b) {
    sort(a.begin(), a.end(), [](const string& x, const string& y) {
        return make_pair(x.length() % 2, x) < make_pair(y.length() % 2, y);
    });
    sort(b.begin(), b.end(), [](const string& x, const string& y) {
        return make_pair(x.length() % 2, x) < make_pair(y.length() % 2, y);
    });
    return a == b;
}