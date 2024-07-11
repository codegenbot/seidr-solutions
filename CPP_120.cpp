vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> res;
    for (int i = 0; i < k; i++) {
        res.push_back(arr[i]);
    }
    return res;
}