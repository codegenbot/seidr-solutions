vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int max_val = numbers[0];
    for(int i=0; i<numbers.size(); i++){
        max_val = max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    return result;
}