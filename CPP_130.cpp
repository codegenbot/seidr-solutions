vector<int> res(n + 1);
    if (n >= 1) {
        res[1] = 3;
    }
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            res[i] = 1 + i / 2;
        } else {
            res[i] = res[i - 1] + res[i - 2] + res[i + 1];
        }
    }
    return res;
}