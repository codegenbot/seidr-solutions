int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = (num / 3);
        result = floor(result);
        sum += result - 2;
    }
    return sum;
}