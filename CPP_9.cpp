vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_so_far = INT_MIN;
    for (int num : numbers) {
        if (num > max_so_far) {
            max_so_far = num;
        }
        result.push_back(max_so_far);
    }
    return result;
}