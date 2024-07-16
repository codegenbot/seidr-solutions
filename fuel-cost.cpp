int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = num / 3;
        newNum = (newNum > 0) ? newNum - 2 : 0;
        sum += newNum;
    }
    return sum;
}