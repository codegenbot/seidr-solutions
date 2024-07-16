bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> rolling_max(const vector<int>& numbers) {
    vector<int> result;
    int max_num = numbers[0];
    result.push_back(max_num);
    
    for (int i = 1; i < numbers.size(); ++i) {
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    
    return result;
}