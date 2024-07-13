int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = (num / 3);
        result = (result > 0 ? result - 1 : 0);
        sum += result;
    }
    return sum;
}