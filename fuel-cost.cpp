int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int res = (num / 3);
        res = floor(res);
        res -= 2;
        sum += res;
    }
    return sum;
}