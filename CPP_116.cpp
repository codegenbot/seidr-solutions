vector<int> sort_vector(vector<int> arr) {
    vector<pair<int, int>> pairArr;
    
    for(int i = 0; i < arr.size(); i++) {
        pairArr.push_back({__builtin_popcount(arr[i]), arr[i]});
    }
    
    sort(pairArr.begin(), pairArr.end());
    
    vector<int> result;
    
    for(auto p : pairArr) {
        result.push_back(p.second);
    }
    
    return result;
}