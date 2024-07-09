vector<int> maximum(vector<int> arr, int k) {
    vector<int> res;
    vector<int> arr_copy = arr; 
    for (int i = 0; i < k; i++) {
        auto it = max_element(arr_copy.begin(), arr_copy.end());
        res.push_back(*it);
        arr_copy.erase(it - arr_copy.begin()); 
    }
    return res;
}