sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_digits_a = 0, sum_digits_b = 0;
    if (a < 0) a *= -1;
    if (b < 0) b *= -1;
    while (a) { sum_digits_a += a % 10; a /= 10; }
    while (b) { sum_digits_b += b % 10; b /= 10; }
    if (sum_digits_a == sum_digits_b) return (&a - &nums[0]) < (&b - &nums[0]);
    return sum_digits_a < sum_digits_b;
});
return nums;