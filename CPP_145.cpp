sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_a = 0, sum_b = 0;
    int tmp_a = abs(a), tmp_b = abs(b);
    while (tmp_a > 0) {
        sum_a += tmp_a % 10;
        tmp_a /= 10;
    }
    while (tmp_b > 0) {
        sum_b += tmp_b % 10;
        tmp_b /= 10;
    }
    if (sum_a == sum_b) {
        return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
    }
    return sum_a < sum_b;
});
return nums;