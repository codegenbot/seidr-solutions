bool issame(int a, int b) {
    int sum_a = 0, sum_b = 0;
    int temp_a = abs(a), temp_b = abs(b);
    while (temp_a > 0) {
        sum_a += temp_a % 10;
        temp_a /= 10;
    }
    while (temp_b > 0) {
        sum_b += temp_b % 10;
        temp_b /= 10;
    }
    return sum_a == sum_b;
}

bool order_by_points(int a, int b, const vector<int>& nums) {
    if (issame(a, b)) {
        return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
    }
    return a < b;
}

sort(nums.begin(), nums.end(), [&](int a, int b) {
    return order_by_points(a, b, nums);
});
return nums;