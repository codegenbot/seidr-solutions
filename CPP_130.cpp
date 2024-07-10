vector<int> tri(int n) {
    vector<int> res(1);
    if (n > 0) {
        res.push_back(3);
        for (int i = 2; i <= n; ++i) {
            int x = (i & 1) ? res[i - 1] + res[i - 2] + (i % 2 == 0 ? 1 : 0)
                           : 1 + i / 2;
            res.push_back(x);
        }
    }
    return res;
}