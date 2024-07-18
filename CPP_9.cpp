vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int curr_max = INT_MIN;
    for (int i = 0; i < numbers.size(); i++) {
        curr_max = max(curr_max, numbers[i]);
        result.push_back(curr_max);
    }
    return result;
}