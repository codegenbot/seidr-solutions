Here is the solution:

vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    partial_sort(res.begin(), res.end(), [](int a, int b) { return a > b; });
    return res;
}