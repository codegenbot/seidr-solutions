vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    vector<int> oddResult;
    for (int num : result) {
        if (num % 2 != 0) {
            oddResult.push_back(num);
        }
    }
    sort(oddResult.begin(), oddResult.end());
    return oddResult;
}