vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.size());
    for (int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result[i] = *it;
        arr.erase(it);
    }
    return result;
}