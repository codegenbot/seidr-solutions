vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_num = INT_MIN;
    for (int num : numbers) {
        if (num > max_num) {
            max_num = num;
        }
        result.push_back(max_num);
    }
    return result;
}