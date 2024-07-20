vector<int> result;
    if (n >= 0) {
        if (n >= 1) {
            result.push_back(3);
        }
        if (n >= 2) {
            result.push_back(1 + n / 2);
        }
        if (n >= 3) {
            result.push_back(result[1] + result[0] + result[1]);
        }
        for (int i = 4; i <= n; ++i) {
            result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
        }
    }
    return result;
}