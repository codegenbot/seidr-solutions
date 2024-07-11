bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

sort(nums.begin(), nums.end(), [order_by_points](int a, int b) {
    int sum_a = 0, sum_b = 0;
    int temp_a = abs(a), temp_b = abs(b);
    while (temp_a) {
        sum_a += temp_a % 10;
        temp_a /= 10;
    }
    while (temp_b) {
        sum_b += temp_b % 10;
        temp_b /= 10;
    }
    if (issame(order_by_points(a), order_by_points(b))) {
        return a < b;
    }
    return sum_a < sum_b;
});

return nums;