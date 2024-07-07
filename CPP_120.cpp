vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    if (k >= arr.size()) {
        sort(arr.begin(), arr.end());
        return vector<int>(arr.begin(), arr.begin() + k);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < k; i++) {
        result.push_back(arr[arr.size() - i - 1]);
    }
    return result;
}