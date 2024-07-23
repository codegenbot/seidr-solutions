Here is the solution:

int fuelCost(vector<int> &nums) {
    int total = 0;
    for (int num : nums) {
        int newNum = (num / 3);
        if (newNum < 1) {
            newNum = 0;
        } else {
            newNum--;
        }
        total += newNum;
    }
    return total;
}