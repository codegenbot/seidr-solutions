Here is the solution:

int fuelCost(vector<int> &nums) {
    int sum = 0;
    for (int num : nums) {
        int result = floor(num / 3.0);
        sum += (result - 2);
    }
    return sum;
}