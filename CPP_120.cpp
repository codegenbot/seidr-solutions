vector<int> maximum(vector<int> arr,int k){
    vector<int> res;
    for(int i = 0; i < k; i++){
        int max_idx = -1;
        for(int j = 0; j < arr.size(); j++){
            if(arr[j] > arr[max_idx])
                max_idx = j;
        }
        res.push_back(arr[max_idx]);
        arr.erase(arr.begin() + max_idx);
    }
    sort(res.begin(), res.end());
    return res;
}