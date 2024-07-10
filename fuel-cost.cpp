int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = (num / 3);
        newNum = std::floor(newNum) - 2;
        if (newNum >= 1) {
            sum += newNum;
        }
    }
    return sum;
}