vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    copy_n(std::make_heap(arr.begin(), arr.end()),
           res.begin(), res.end());
    return res;
}