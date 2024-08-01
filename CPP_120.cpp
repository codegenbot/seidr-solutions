vector<int> maximum(vector<int> arr, int k) {
    vector<int> res;
    unordered_set<int> unique;
    
    for(int i = 0; i < arr.size(); i++){
        if(unique.find(arr[i]) == unique.end()){
            unique.insert(arr[i]);
            if(unique.size() >= k){
                break;
            }
        }
    }
    res.assign(unique.begin(), unique.end());
    return res;
}