vector<int> tri(int n) {
    vector<int> result;
    if (n == 0)
        return vector<int>(1, 3);
    result.push_back(3);
    for (int i = 2; i <= n; i++) {
        int a = i % 2 == 0 ? 2 * result[i - 1] : result[i - 1] + result[i];
        result.push_back(a);
    }
    return result;
}