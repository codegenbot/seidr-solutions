vector<int> result;
    for (int i = 0; i <= n; ++i) {
        if (i == 1) {
            result.push_back(3);
        } else if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            int sum = result[i - 1] + result[i - 2] + result[i + 1];
            result.push_back(sum);
        }
    }
    return result;
}