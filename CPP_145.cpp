sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_digits_a = abs(a) == 0 ? 0 : abs(a) % 9 == 0 ? 9 : abs(a) % 9;
    int sum_digits_b = abs(b) == 0 ? 0 : abs(b) % 9 == 0 ? 9 : abs(b) % 9;
    
    if (sum_digits_a == sum_digits_b) {
        return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
    }
    
    return sum_digits_a < sum_digits_b;
});

return nums;