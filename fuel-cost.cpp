int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = (num / 3);
        result = min(result, 0); // round down to nearest integer and subtract 2 if less than 0
        sum += result - 2; 
    }
    return sum;
}