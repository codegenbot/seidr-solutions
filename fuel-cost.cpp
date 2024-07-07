int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = (num / 3);
        newNum = std::floor(newNum); // round down to nearest integer
        newNum -= 2; 
        sum += newNum;
    }
    return sum;
}