sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_digits_a = 0, sum_digits_b = 0;
    int temp_a = abs(a), temp_b = abs(b);
    while (temp_a > 0) {
        sum_digits_a += temp_a % 10;
        temp_a /= 10;
    }
    while (temp_b > 0) {
        sum_digits_b += temp_b % 10;
        temp_b /= 10;
    }
    if (sum_digits_a == sum_digits_b) {
        return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
    }
    return sum_digits_a < sum_digits_b;
});
return nums;