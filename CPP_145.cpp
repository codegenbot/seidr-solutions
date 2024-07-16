sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_digits_a = 0, sum_digits_b = 0;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (a > 0) {
        sum_digits_a += a % 10;
        a /= 10;
    }
    while (b > 0) {
        sum_digits_b += b % 10;
        b /= 10;
    }
    if (sum_digits_a == sum_digits_b) {
        return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
    }
    return sum_digits_a < sum_digits_b;
});
return nums;