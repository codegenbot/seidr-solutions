vector<int> result;
    if (n == 0) {
        result.push_back(0);
        return result;
    }
    if (n == 1) {
        result.push_back(3);
        return result;
    }
    result.push_back(3);
    result.push_back(1);
    int prev1 = 3, prev2 = 1, prev3 = 0;
    for (int i = 3; i <= n; ++i) {
        int current;
        if (i % 2 == 0) {
            current = 1 + i / 2;
        } else {
            current = prev1 + prev2 + prev3;
        }
        result.push_back(current);
        prev3 = prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return result;
}