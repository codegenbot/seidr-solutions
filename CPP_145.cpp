sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_digits_a = 0, sum_digits_b = 0;
    int tmp_a = abs(a), tmp_b = abs(b);
    
    while (tmp_a) {
        sum_digits_a += tmp_a % 10;
        tmp_a /= 10;
    }
    
    while (tmp_b) {
        sum_digits_b += tmp_b % 10;
        tmp_b /= 10;
    }
    
    if (sum_digits_a == sum_digits_b) {
        return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
    }
    
    return sum_digits_a < sum_digits_b;
});

return nums;