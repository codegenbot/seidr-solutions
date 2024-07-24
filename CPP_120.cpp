Here is the completed code:

vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    partial_sort(res.begin(), res.end(), [&arr](int a, int b){ return std::abs(a) > std::abs(b); });
    return res;
}