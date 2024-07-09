Here is the completed code:

vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    for (int i = 0; i < k; ++i) {
        res[i] = *std::max_element(arr.begin(), arr.end());
        arr.erase(std::remove(arr.begin(), arr.end(), *std::max_element(arr.begin(), arr.end())), arr.end());
    }
    return res;
}