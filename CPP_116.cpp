vector<int> sort_vector(vector<int> arr) {
    stable_partition(arr.begin(), arr.end(), [&](int x) { return __builtin_popcount(x); });
    return arr;
}