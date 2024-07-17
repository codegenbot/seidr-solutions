int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int res = num / 3;
        if (res < 1) res = 0;
        else res -= 2;
        sum += res;
    }
    return sum;
}