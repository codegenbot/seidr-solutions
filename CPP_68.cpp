vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int minEven = INT_MAX;
    int minIndex = INT_MAX;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }
    
    if (minEven != INT_MAX) {
        result.push_back(minEven);
        result.push_back(minIndex);
    }
    
    return result;
}