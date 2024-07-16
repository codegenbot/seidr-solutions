int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = num // 3; // use floor division
        newNum -= 2;
        sum += newNum;
    }
    return sum;
}