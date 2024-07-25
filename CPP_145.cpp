sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_a = 0, sum_b = 0;
    int temp_a = (a < 0) ? -a : a;
    int temp_b = (b < 0) ? -b : b;
    
    while (temp_a > 0) {
        sum_a += temp_a % 10;
        temp_a /= 10;
    }
    while (temp_b > 0) {
        sum_b += temp_b % 10;
        temp_b /= 10;
    }
    
    if (sum_a == sum_b)
        return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
    return sum_a < sum_b;
});

return nums;
}