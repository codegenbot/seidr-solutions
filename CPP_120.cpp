vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    partial_sort(arr.begin(), arr.begin() + k, arr.end());
    copy(arr.begin(), arr.begin() + k, res.begin());
    return res;
}