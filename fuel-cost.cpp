int fuelCost(vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        if (num < 3) {
            continue;
        }
        int result = (num / 3);
        sum += (result - 2);
    }
    return sum;
}