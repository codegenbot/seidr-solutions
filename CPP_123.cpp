vector<int> res;
    while (n != 1) {
        if (n % 2 == 1)
            res.push_back(n);
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    res.push_back(1);
    sort(res.begin(), res.end());
    return res;