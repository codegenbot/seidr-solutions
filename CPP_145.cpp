sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_a = abs(a), sum_b = abs(b);
    while (sum_a >= 10) sum_a = sum_a / 10 + sum_a % 10;
    while (sum_b >= 10) sum_b = sum_b / 10 + sum_b % 10;
    if (sum_a == sum_b) return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
    return sum_a < sum_b;
});
return nums;