vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;
    
    int smallest_even = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
        }
    }
    
    if (smallest_even != INT_MAX) {
        result.push_back(smallest_even);
    } else {
        result.push_back(0);
    }
    
    return result;
}