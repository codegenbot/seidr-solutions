Here is the solution:

```cpp
vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    partial_sort(arr.begin(), arr.begin() + k, arr.end(),
                  [&res](int a, int b) { return res.back() < a; });
    for (int i = 0; i < k; ++i) {
        res[i] = arr[k - i - 1];
    }
    return res;
}