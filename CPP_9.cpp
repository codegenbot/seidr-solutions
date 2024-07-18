vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int max_elem = INT_MIN;
    for(int i=0; i<numbers.size(); i++){
        max_elem = max(max_elem, numbers[i]);
        result.push_back(max_elem);
    }
    return result;
}