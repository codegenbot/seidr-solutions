vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    partial_sort(arr.begin(), arr.begin() + k, arr.end());
    copy_n(arr.rbegin(), k, res.begin());
    return res;
}