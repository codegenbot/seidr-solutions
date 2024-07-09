bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end(), [](int x, int y) {
        int countX = __builtin_popcount(x);
        int countY = __builtin_popcount(y);
        if (countX == countY) {
            return x < y;
        }
        return countX < countY;
    });
    sort(b.begin(), b.end(), [](int x, int y) {
        int countX = __builtin_popcount(x);
        int countY = __builtin_popcount(y);
        if (countX == countY) {
            return x < y;
        }
        return countX < countY;
    });
    return a == b;
}