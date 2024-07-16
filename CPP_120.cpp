vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    partial_sort(arr.begin(), arr.end() - k + 1, arr.end());
    for (int i = 0; i < k; ++i) {
        res[i] = arr[arr.size() - i - 1];
    }
    return res;
}