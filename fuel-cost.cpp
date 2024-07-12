int fuel_cost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        sum += max(num / 3 - 2, 0);
    }
    return sum;
}