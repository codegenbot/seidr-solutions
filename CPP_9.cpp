vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = numbers[0];
    for (int i = 0; i < numbers.size(); i++) {
        result.push_back(max);
        max = max > numbers[i] ? max : numbers[i];
    }
    return result;
}