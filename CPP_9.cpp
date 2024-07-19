vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int n = numbers.size();
    for (int i = 0; i < n; ++i) {
        int max_num = numbers[i];
        for (int j = i + 1; j < n; ++j) {
            if (numbers[j] > max_num) {
                max_num = numbers[j];
            }
        }
        result.push_back(max_num);
    }
    return result;
}