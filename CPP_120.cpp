vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    for (int i = 0; i < k; i++) {
        int maxVal = *max_element(arr.begin(), arr.end());
        result.push_back(maxVal);
        arr.erase(remove(arr.begin(), arr.end(), maxVal), arr.end());
    }
    return result;
}