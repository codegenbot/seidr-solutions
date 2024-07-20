vector<int> result;
    if (n == 0) return result;
    if (n == 1) {
        result.push_back(3);
        return result;
    }
    result.push_back(1);
    int prev1 = 1, prev2 = 3, current;
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            current = 1 + i / 2;
        } else {
            current = prev1 + prev2 + result[i - 1];
        }
        result.push_back(current);
        prev1 = prev2;
        prev2 = current;
    }
    return result;