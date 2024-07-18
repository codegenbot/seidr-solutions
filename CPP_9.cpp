vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    if(numbers.empty()) return result;
    
    int n = numbers.size();
    result.push_back(numbers[0]);
    
    for(int i = 1; i < n; i++){
        result.push_back(max(result[i-1], numbers[i]));
    }
    
    return result;
}