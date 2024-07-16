int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = num // 3; 
        newNum -= 2;
        sum += newNum > 0 ? newNum : 0;
    }
    return sum;
}