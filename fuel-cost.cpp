int calculateFuelCost(vector<int>& nums) {
    int total = 0;
    for (int num : nums) {
        int newNum = (num / 3);
        newNum = min(newNum, 0); // round down to nearest integer
        newNum--; // subtract 2
        total += newNum; // add to the total sum
    }
    return total;
}