int fuelCost(vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        int temp = num / 3;
        temp = temp > 0 ? temp - 1 : 0; // round down to nearest integer
        sum += temp;
    }
    return sum;
}