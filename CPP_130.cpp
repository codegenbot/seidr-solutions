vector<int> res;
    if (n >= 0) {
        res.push_back(3);
        if (n >= 1) {
            res.push_back(1);
            int prev1 = 3, prev2 = 1, curr = 2;
            for (int i = 2; i <= n; ++i) {
                if (i % 2 == 0) {
                    curr = 1 + i / 2;
                } else {
                    curr = prev1 + prev2 + res[i - 1];
                }
                res.push_back(curr);
                prev2 = prev1;
                prev1 = res[i];
            }
        }
    }
    return res;