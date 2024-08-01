vector<int> maximum(vector<int> arr, int k) {
    vector<int> res;
    unordered_set<int> unique;
    
    for(int i = 0; i < arr.size(); i++) {
        if(unique.find(arr[i]) == unique.end()) {
            res.push_back(arr[i]);
            if(res.size() == k)
                break;
            unique.insert(arr[i]);
        }
    }
    
    return res;
}