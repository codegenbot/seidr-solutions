vector<int> sort_vector(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int a_count = __builtin_popcount(a);
        int b_count = __builtin_popcount(b);
        if (a_count == b_count) {
            return a < b;
        } else {
            return a_count < b_count;
        }
    });
    return arr;
}