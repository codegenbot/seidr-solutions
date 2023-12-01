vector<int> maximum(vector<int> arr, int k){
    sort(arr.rbegin(), arr.rend());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}