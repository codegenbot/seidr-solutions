vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int n = numbers.size();
    for (int i = 0; i < n; i++) {
        int mx = numbers[i];
        for (int j = i + 1; j < n; j++) {
            mx = max(mx, numbers[j]);
        }
        result.push_back(mx);
    }
    return result;
}