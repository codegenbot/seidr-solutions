bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_a = accumulate(to_string(abs(a)).begin(), to_string(abs(a)).end(), 0, [](int sum, char c) { return sum + (c - '0'); });
    int sum_b = accumulate(to_string(abs(b)).begin(), to_string(abs(b)).end(), 0, [](int sum, char c) { return sum + (c - '0'); });

    if (sum_a == sum_b) {
        return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
    }

    return sum_a < sum_b;
});

return nums;