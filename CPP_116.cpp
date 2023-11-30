vector<int> sort_vector(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int aCount = __builtin_popcount(a);
        int bCount = __builtin_popcount(b);
        if (aCount == bCount) {
            return a < b;
        }
        return aCount < bCount;
    });
    return arr;
}