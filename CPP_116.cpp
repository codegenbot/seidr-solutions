sort(arr.begin(), arr.end(), [](int a, int b) {
    int count_a = __builtin_popcount(a);
    int count_b = __builtin_popcount(b);
    if (count_a != count_b) {
        return count_a < count_b;
    } else {
        return a < b;
    }
});
return arr;