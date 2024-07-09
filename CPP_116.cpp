bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end(), [](int x, int y) {
        return __builtin_popcount(x) < __builtin_popcount(y);
    });
    sort(b.begin(), b.end(), [](int x, int y) {
        return __builtin_popcount(x) < __builtin_popcount(y);
    });
    return a == b;
}