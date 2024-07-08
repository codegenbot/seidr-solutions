vector<int> sort_array(vector<int> arr) {
    vector<tuple<int, int>> result;
    
    for (int i = 0; i < arr.size(); i++) {
        int onesCount = __builtin_popcount(arr[i]);
        result.push_back(make_tuple(onesCount, arr[i]));
    }
    
    sort(result.begin(), result.end());
    
    vector<int> sortedArray;
    
    for (auto &x : result) {
        sortedArray.push_back(get<1>(x));
    }
    
    return sortedArray;
}