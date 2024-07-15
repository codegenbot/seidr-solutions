sort(arr.begin(), arr.end(), [](int a, int b) {
    int a_ones = __builtin_popcount(a);
    int b_ones = __builtin_popcount(b);
    if (a_ones != b_ones) {
        return a_ones < b_ones;
    }
    return a < b;
});
return arr;
}