int calculateFuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        sum += (num / 3) - 2 + (num % 3 == 0 ? 0 : 1);
    }
    return sum;
}