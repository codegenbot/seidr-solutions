vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.size());
    copy(arr.begin(), arr.end(), result.begin());
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    for(int i = 0; i < k; i++) {
        cout << result[i] << " ";
    }
    return result;
}