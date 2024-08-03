vector<int> maximum(vector<int> arr,int k){
    vector<int> result;
    for(int i=0; i<k; i++){
        int max_num = *max_element(arr.begin(), arr.end());
        result.push_back(max_num);
        arr.erase(remove(arr.begin(), arr.end(), max_num), arr.end());
    }
    return result;
}