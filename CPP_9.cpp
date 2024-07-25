vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int maxVal = INT_MIN;
    for (int i = 0; i < numbers.size(); ++i) {
        maxVal = max(maxVal, numbers[i]);
        result.push_back(maxVal);
    }
    return result;
}