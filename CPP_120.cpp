Here is the completed code:

vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    for (int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        res[i] = *it;
        arr.erase(it);
    }
    return res;
}