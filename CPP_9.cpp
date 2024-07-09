vector<int> rolling_max(vector<int> numbers){
    int n = numbers.size();
    vector<int> result(n);
    result[0] = numbers[0];
    for(int i = 1; i < n; i++){
        result[i] = max(result[i-1], numbers[i]);
    }
    return result;
}