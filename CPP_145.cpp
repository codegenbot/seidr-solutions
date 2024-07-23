bool issame(const vector<int>& a, const vector<int>& b) {
    int sum_a = 0, sum_b = 0;
    for (int num : a) {
        sum_a += abs(num) % 10;
    }
    for (int num : b) {
        sum_b += abs(num) % 10;
    }
    if (sum_a == sum_b) {
        return a < b;
    }
    return sum_a < sum_b;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        return issame({a}, {b});
    });
    return nums;
}