vector<int> rolling_max(vector<int> numbers) {
    vector<int> rolling_max_nums;
    int max_num = INT_MIN;
    for (int i = 0; i < numbers.size(); i++) {
        max_num = max(max_num, numbers[i]);
        rolling_max_nums.push_back(max_num);
    }
    return rolling_max_nums;
}