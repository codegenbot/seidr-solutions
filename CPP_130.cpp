vector<int> res;
    if (n >= 0) {
        res.push_back(3);
        if (n > 0) {
            res.push_back(1);
            for (int i = 2; i <= n; ++i) {
                if (i % 2 == 0) {
                    res.push_back(1 + i / 2);
                } else {
                    res.push_back(res[i - 1] + res[i - 2] + res[i + 1]);
                }
            }
        }
    }
    return res;
}