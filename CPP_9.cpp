vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int maxNum = INT_MIN;
    for (int i = 0; i < numbers.size(); ++i) {
        maxNum = max(maxNum, numbers[i]);
        result.push_back(maxNum);
    }
    return result;
}