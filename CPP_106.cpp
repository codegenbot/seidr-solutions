vector<int> res;
    int sum = 0;
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            fact *= i;
            res.push_back(fact);
        } else {
            sum += i;
            res.push_back(sum);
        }
    }
    return res;
}