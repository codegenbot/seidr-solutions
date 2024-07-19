vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int n = numbers.size();
    if (n == 0) {
        return result;
    }
    
    int maxNum = numbers[0];
    result.push_back(maxNum);
    
    for (int i = 1; i < n; i++) {
        maxNum = max(maxNum, numbers[i]);
        result.push_back(maxNum);
    }
    
    return result;
}