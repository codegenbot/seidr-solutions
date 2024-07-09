bool issame(vector<int> a, vector<int> b) {
    int sum_a = accumulate(a.begin(), a.end(), 0);
    int sum_b = accumulate(b.begin(), b.end(), 0);
    
    return sum_a == sum_b;
}

void order_by_points(vector<int>& nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = accumulate_digits(a);
        int sum_b = accumulate_digits(b);
        
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
}

return nums;