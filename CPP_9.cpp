vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_value = INT_MIN;
    for (int i = 0; i < numbers.size(); ++i) {
        max_value = max(max_value, numbers[i]);
        result.push_back(max_value);
    }
    return result;
}