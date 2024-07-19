vector<int> res;
    while (n != 1) {
        res.push_back(n);
        n = n % 2 ? 3 * n + 1 : n / 2;
    }
    res.push_back(1);
    sort(res.begin(), res.end());
    vector<int> odd_res;
    for (int num : res) {
        if (num % 2 != 0) {
            odd_res.push_back(num);
        }
    }
    return odd_res;