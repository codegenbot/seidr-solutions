sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_a = 0, sum_b = 0;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (a) { sum_a += a % 10; a /= 10; }
    while (b) { sum_b += b % 10; b /= 10; }
    if (sum_a == sum_b) return false;
    return sum_a < sum_b;
});
return nums;