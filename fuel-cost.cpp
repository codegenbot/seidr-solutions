Here is the solution:

int fuelCost(vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        long long res = (long long)num / 3; // avoid integer overflow
        res = floor(res);
        sum += res - 2;
    }
    return sum;
}