vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    partial_sort(res.begin(), res.end(), [&arr](int a, int b) { return abs(a) > abs(b); });
    for (int i = 0; i < k; ++i) {
        res[i] = (k - i - 1 >= 0 && arr[k - i - 1] > arr[k - i - 2]) ? arr[k - i - 1] : arr[k - i - 2];
    }
    return res;
}