bool issame(vector<int> a, vector<int> b) {
    int sum_a = accumulate(a.begin(), a.end(), 0);
    int sum_b = accumulate(b.begin(), b.end(), 0);
    return sum_a == sum_b;
}

bool order_by_points(const vector<int>& a, const vector<int>& b) {
    int sum_a = accumulate(a.begin(), a.end(), 0);
    int sum_b = accumulate(b.begin(), b.end(), 0);
    if (sum_a == sum_b) {
        return a < b;
    }
    return sum_a < sum_b;
}

sort(nums.begin(), nums.end(), order_by_points);
return nums;