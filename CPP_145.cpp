sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_a = 0, sum_b = 0;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (a > 0) {
        sum_a += a % 10;
        a /= 10;
    }
    while (b > 0) {
        sum_b += b % 10;
        b /= 10;
    }
    if (sum_a == sum_b) {
        return a < b;
    }
    return sum_a < sum_b;
});
return nums;