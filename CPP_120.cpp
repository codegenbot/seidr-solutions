vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(k);
    partial_sort(arr.begin(), arr.begin() + k, arr.end());
    for (int i = 0; i < k; i++) {
        result[i] = arr[i];
    }
    return result;
}