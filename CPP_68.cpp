Here is the completed code:

vector<int> pluck(vector<int> arr) {
    int smallest_even = INT_MAX;
    int index_of_smallest_even = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index_of_smallest_even = i;
        }
    }
    
    vector<int> result;
    if (!arr.empty()) {
        result.push_back(smallest_even);
        result.push_back(index_of_smallest_even);
    } else {
        result.push_back(0);
        result.push_back(0);
    }
    
    return result;
}