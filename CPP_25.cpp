vector<int> res;
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            res.push_back(i);
            n /= i;
        }
    }
    return res;