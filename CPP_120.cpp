Here is the completed code:

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.size());
    copy_if(arr.begin(), arr.end(), result.begin(),
            [k](int x) { return k-- > 0; });
    sort(result.begin(), result.end());
    while (k--) {
        swap(*result.rbegin(), *result.rbegin() - 1);
    }
    return vector<int>(result.begin(), result.begin() + k);
}