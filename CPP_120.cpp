vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    partial_sort(arr.begin(), arr.end() - k + 1, arr.end());
    copy(arr.end() - k, arr.end(), res.begin());
    return res;
}