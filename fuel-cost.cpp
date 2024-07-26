int fuel_cost(const vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += (nums[i] / 3) - 2;
    }
    return sum;
}