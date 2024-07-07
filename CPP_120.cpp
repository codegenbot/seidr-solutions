vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    for (int i = 0; i < k; i++) {
        int maxNum = *max_element(arr.begin(), arr.end());
        result.push_back(maxNum);
        arr.erase(remove(arr.begin(), arr.end(), maxNum), arr.end());
    }
    return result;
}