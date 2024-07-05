vector<int> sort_array(vector<int> arr) {
    auto count_ones = [](int n) {
        return __builtin_popcount(n);
    };
    
    sort(arr.begin(), arr.end(), [&](int a, int b) {
        int ones_a = count_ones(a);
        int ones_b = count_ones(b);
        if (ones_a == ones_b) {
            return a < b;
        }
        return ones_a < ones_b;
    });
    
    return arr;
}