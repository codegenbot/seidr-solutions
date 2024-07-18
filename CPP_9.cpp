vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int maxSoFar = INT_MIN;
    for (int i = 0; i < numbers.size(); ++i) {
        maxSoFar = max(maxSoFar, numbers[i]);
        result.push_back(maxSoFar);
    }
    return result;
}