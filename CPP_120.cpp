vector<int> maximum(vector<int> arr,int k){
    vector<int> result;
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for(int i=n-1; i>=n-k; i--){
        result.push_back(arr[i]);
    }
    return result;
}