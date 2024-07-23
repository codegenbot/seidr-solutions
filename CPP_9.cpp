vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_num = INT_MIN;
    for (int num : numbers) {
        max_num = max(max_num, num);
        result.push_back(max_num);
    }
    return result;
}