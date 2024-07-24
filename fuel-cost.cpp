int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        sum += max(0, num / 3 - 2);
    }
    return sum;
}