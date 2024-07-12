vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if(arr.empty()) return result;

    int smallestEven = INT_MAX;
    int index = -1;
    
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            index = i;
        }
    }

    if(index != -1) {
        result.push_back({smallestEven, index});
    } else {
        result.push_back({0, -1}); // or any other default value
    }
    
    return result;
}