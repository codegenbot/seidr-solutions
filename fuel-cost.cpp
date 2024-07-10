int fuelCost(vector<int> &nums) {
    int total = 0;
    for (int num : nums) {
        total += ((num / 3) - 2);
    }
    return total;
}