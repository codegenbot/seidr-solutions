int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = (num / 3);
        result = floor(result);
        result -= 2;
        sum += result;
    }
    return sum;
}