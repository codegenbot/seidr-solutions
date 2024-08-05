vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int n = numbers.size();
    if(n == 0) return result;
    int max_val = numbers[0];
    result.push_back(max_val);
    for(int i=1; i<n; i++){
        max_val = max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    return result;
}