Here is the solution:

int fuelCost(vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = (num / 3) - 2;
        if (newNum < 0) {
            newNum = 0;
        }
        sum += newNum;
    }
    return sum;
}