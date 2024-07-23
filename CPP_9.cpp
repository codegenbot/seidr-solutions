vector<int> rolling_max(vector<int> numbers) {
    vector<int> max_values;
    int max_val = INT_MIN;
    
    for (int num : numbers) {
        max_val = max(max_val, num);
        max_values.push_back(max_val);
    }
    
    return max_values;
}