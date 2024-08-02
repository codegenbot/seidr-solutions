int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = (num / 3);
        if (newNum < 1) {
            newNum = 0;
        } else {
            newNum--;
        }
        sum += newNum;
    }
    return sum;
}