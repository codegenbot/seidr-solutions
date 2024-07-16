vector<int> maximum(vector<int> arr, int k) {
    vector<int> res;
    for (int i = 0; i < k; ++i) {
        auto it = std::max_element(arr.begin(), arr.end());
        res.push_back(*it);
        arr.erase(it);
    }
    return res;
}