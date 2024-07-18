vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int current_max = numbers[0];
    result.push_back(current_max);
    for (int i = 1; i < numbers.size(); ++i) {
        current_max = max(current_max, numbers[i]);
        result.push_back(current_max);
    }
    return result;
}