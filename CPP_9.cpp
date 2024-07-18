vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_val = INT_MIN;
    for (int num : numbers) {
        max_val = max(max_val, num);
        result.push_back(max_val);
    }
    return result;
}