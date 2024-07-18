vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    result.push_back(numbers[0]);
    for (int i = 1; i < numbers.size(); ++i) {
        result.push_back(max(result[i - 1], numbers[i]));
    }
    return result;
}