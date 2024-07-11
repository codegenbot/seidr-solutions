sort(arr.begin(), arr.end(), [](int a, int b) {
    int num_ones_a = __builtin_popcount(a);
    int num_ones_b = __builtin_popcount(b);
    if (num_ones_a == num_ones_b) {
        return a < b;
    }
    return num_ones_a < num_ones_b;
});
return arr;
}