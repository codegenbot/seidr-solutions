sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_a = 0, sum_b = 0;
    int a_copy = abs(a), b_copy = abs(b);
    while (a_copy > 0) {
        sum_a += a_copy % 10;
        a_copy /= 10;
    }
    while (b_copy > 0) {
        sum_b += b_copy % 10;
        b_copy /= 10;
    }
    if (sum_a == sum_b) {
        return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
    }
    return sum_a < sum_b;
});
return nums;