vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.size());
    copy_if(arr.begin(), arr.end(), result.begin(),
             [k](int x) { return --k > 0; });
    sort(result.begin(), result.end(), greater<int>());
    while (result.size() > k)
        result.pop_back();
    return result;
}