vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    partial_sort(arr.begin(), arr.begin() + k, arr.end(),
                  [&res](int a, int b) { return a > res.back(); });
    return res;
}