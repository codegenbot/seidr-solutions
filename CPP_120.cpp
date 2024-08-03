```c++
bool issame(vector<int> a, vector<int> b) {
    // your implementation
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}