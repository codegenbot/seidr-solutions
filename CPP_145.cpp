sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_a = 0, sum_b = 0;

    for (int temp_a = abs(a); temp_a > 0; temp_a /= 10) {
        sum_a += temp_a % 10;
    }

    for (int temp_b = abs(b); temp_b > 0; temp_b /= 10) {
        sum_b += temp_b % 10;
    }

    return sum_a == sum_b ? a < b : sum_a < sum_b;
});

return nums;