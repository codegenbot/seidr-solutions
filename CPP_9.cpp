vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    if (numbers.empty()) return result;

    int maxSoFar = numbers[0];
    result.push_back(maxSoFar);

    for (size_t i = 1; i < numbers.size(); ++i) {
        if (numbers[i] > maxSoFar) {
            maxSoFar = numbers[i];
        }
        result.push_back(maxSoFar);
    }

    return result;
}