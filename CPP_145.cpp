sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_digits_a = accumulate(to_string(abs(a)).begin(), to_string(abs(a)).end(), 0, [](int sum, char c) { return sum + (c - '0'); });
    int sum_digits_b = accumulate(to_string(abs(b)).begin(), to_string(abs(b)).end(), 0, [](int sum, char c) { return sum + (c - '0'); });

    if (sum_digits_a == sum_digits_b) {
        return distance(nums.begin(), find(nums.begin(), nums.end(), a)) < distance(nums.begin(), find(nums.begin(), nums.end(), b));
    }

    return sum_digits_a < sum_digits_b;
});

return nums;