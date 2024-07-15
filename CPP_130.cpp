vector<int> result(n + 1);
    if (n >= 0) {
        result[0] = 3;
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 0) {
                result[i] = 1 + (i / 2);
            } else {
                result[i] = result[i - 1] + result[i - 2] + result[i + 1];
            }
        }
    }
    return result;
}