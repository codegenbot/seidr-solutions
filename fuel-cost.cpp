int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = (num / 3) - 2;
        if (result < 0) result = 0;
        sum += result;
    }
    return sum;
}