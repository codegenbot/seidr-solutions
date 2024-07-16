vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.size());
    copy_if(arr.begin(), arr.end(), result.begin(),
             [k](int i) { return --k > 0; });
    sort(result.begin(), result.end());
    return vector<int>(result.begin(), result.begin() + min(k, (int)size()));
}