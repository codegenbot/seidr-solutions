vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int curr_max = numbers[0];
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] > curr_max) {
            curr_max = numbers[i];
        }
        result.push_back(curr_max);
    }
    return result;
}