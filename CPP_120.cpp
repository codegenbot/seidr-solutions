vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    copy_n(rbegin(arr), k, rbegin(res));
    return res;
}