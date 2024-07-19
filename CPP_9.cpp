vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int n = numbers.size();
    for (int i = 0; i < n; ++i) {
        int cur_max = numbers[i];
        for (int j = i + 1; j < n; ++j) {
            if (numbers[j] > cur_max) {
                cur_max = numbers[j];
            }
        }
        result.push_back(cur_max);
    }
    return result;
}