Here is the solution:

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.size());
    partial_sort(result.begin(), result.begin() + k, result.end(),
                  [](int a, int b) { return a > b; });
    return vector<int>(result.begin(), result.begin() + k);
}