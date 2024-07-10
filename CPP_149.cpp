bool are_same(vector<string> a, vector<string> b) {
    a.erase(remove_if(a.begin(), a.end(), [](const string& s) { return s.length() % 2 != 0; }), a.end());
    sort(a.begin(), a.end(), [](const string& x, const string& y) {
        if (x.length() == y.length()) {
            return x < y;
        }
        return x.length() < y.length();
    });
    b.erase(remove_if(b.begin(), b.end(), [](const string& s) { return s.length() % 2 != 0; }), b.end());
    sort(b.begin(), b.end(), [](const string& x, const string& y) {
        if (x.length() == y.length()) {
            return x < y;
        }
        return x.length() < y.length();
    });
    return a == b;
}