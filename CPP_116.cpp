bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end(), [](int x, int y) {
        int count_x = __builtin_popcount(x);
        int count_y = __builtin_popcount(y);
        if (count_x == count_y) {
            return x < y;
        }
        return count_x < count_y;
    });
    sort(b.begin(), b.end(), [](int x, int y) {
        int count_x = __builtin_popcount(x);
        int count_y = __builtin_popcount(y);
        if (count_x == count_y) {
            return x < y;
        }
        return count_x < count_y;
    });
    return a == b;
}