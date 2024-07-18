sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_a = abs(a), sum_b = abs(b);
    if (sum_a != sum_b) {
        return sum_a < sum_b;
    } else {
        return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
    }
});

return nums;