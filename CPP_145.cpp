sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_a = 0, sum_b = 0;
    int abs_a = abs(a), abs_b = abs(b);
    while (abs_a > 0) {
        sum_a += abs_a % 10;
        abs_a /= 10;
    }
    while (abs_b > 0) {
        sum_b += abs_b % 10;
        abs_b /= 10;
    }
    if (sum_a == sum_b) {
        return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
    }
    return sum_a < sum_b;
});
return nums;