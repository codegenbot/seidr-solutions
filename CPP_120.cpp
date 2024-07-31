vector<int> maximum(vector<int> arr,int k){
    vector<int> result;
    for(int i = 0; i < k; i++){
        int max_val = *max_element(arr.begin(), arr.end());
        result.push_back(max_val);
        arr.erase(remove(arr.begin(), arr.end(), max_val), arr.end());
    }
    return result;
}