vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if(arr.empty()) return {};
    int smallest = INT_MAX, smallest_index = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < smallest) {
            smallest = arr[i];
            smallest_index = i;
        }
    }
    result.push_back(smallest);
    result.push_back(smallest_index);
    return result;
}