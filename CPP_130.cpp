vector<int> tri(int n) {
    vector<int> result(1, 3);
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            int sum = 0;
            for (int j = 1; j <= 3; j++) {
                if (j <= i - 1) {
                    sum += result[result.size() - j];
                }
            }
            result.push_back(sum);
        }
    }
    return result;
}