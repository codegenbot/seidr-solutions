vector<int> tri(int n) {
    vector<int> result(1, 3);
    if (n > 0) {
        for (int i = 1; i < n; i++) {
            int prev = result[i];
            if (i % 2 == 0) {
                result.push_back(i / 2 + 1);
            } else {
                int next = result[i - 1] + result[i - 2] + (i > 1 ? result[i - 3] : 3);
                result.push_back(next);
            }
        }
    }
    return result;
}