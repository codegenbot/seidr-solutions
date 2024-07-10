vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int n = numbers.size();
    int current_max = INT_MIN;
    
    for(int i=0; i<n; i++){
        current_max = max(current_max, numbers[i]);
        result.push_back(current_max);
    }
    
    return result;
}