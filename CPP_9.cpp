vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int n = numbers.size();
    if (n == 0) return result;
    
    int max_num = numbers[0];
    result.push_back(max_num);
    
    for (int i = 1; i < n; ++i) {
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    
    return result;
}