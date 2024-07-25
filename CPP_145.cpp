sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_a = abs(a);
    while (abs(a) > 0) {
        sum_a += abs(a) % 10;
        a /= 10;
    }
    
    int sum_b = abs(b);
    while (abs(b) > 0) {
        sum_b += abs(b) % 10;
        b /= 10;
    }
    
    if (sum_a == sum_b) {
        return a < b;
    }
    
    return sum_a < sum_b;
});

return nums;
}