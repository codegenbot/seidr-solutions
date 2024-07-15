vector<int> res;
    while (n != 1) {
        if (n % 2 != 0) {
            res.push_back(n);
        }
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    res.push_back(1);
    sort(res.begin(), res.end());
    return res;