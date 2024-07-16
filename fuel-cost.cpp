int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = num // 3;
        newNum = max(newNum - 2, 0);
        sum += newNum;
    }
    return sum;
}