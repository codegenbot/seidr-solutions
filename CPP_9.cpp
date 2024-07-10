vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_num = numbers[0];
    for (int i = 0; i < numbers.size(); ++i) {
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}