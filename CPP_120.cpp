vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < k; i++) {
        result.push_back(arr[arr.size() - 1 - i]);
    }
    return result;
}