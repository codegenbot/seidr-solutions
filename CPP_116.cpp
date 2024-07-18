sort(arr.begin(), arr.end(), [](int x, int y) {
    int count_x = __builtin_popcount(x);
    int count_y = __builtin_popcount(y);
    if (count_x == count_y) {
        return x < y;
    }
    return count_x < count_y;
});
return arr;