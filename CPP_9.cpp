vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_element = INT_MIN;
    for (int i = 0; i < numbers.size(); ++i) {
        max_element = max(max_element, numbers[i]);
        result.push_back(max_element);
    }
    return result;
}