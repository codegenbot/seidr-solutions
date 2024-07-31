vector<int> pluck(vector<int> arr){
    vector<int> result;
    int min_even_val = INT_MAX;
    int min_index = INT_MAX;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < min_even_val) {
            min_even_val = arr[i];
            min_index = i;
        }
    }
    
    if (min_index != INT_MAX) {
        result.push_back(min_even_val);
        result.push_back(min_index);
    }
    
    return result;
}