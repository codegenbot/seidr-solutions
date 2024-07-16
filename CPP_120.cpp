vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(k);
    copy(std::make_heap(arr.begin(), arr.end()), arr.end() - k + 1, result.begin());
    return result;
}