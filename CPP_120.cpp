vector<int> maximum(vector<int> arr,int k){
    vector<int> res(k);
    partial_sort(arr.begin(), arr.end() - k + 1, arr.end(),
                  [&res](int a, int b) { return count(res.begin(), res.end(), a) <
                                             count(res.begin(), res.end(), b); });
    return res;
}