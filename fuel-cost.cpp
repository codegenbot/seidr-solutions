int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int temp = (num / 3);
        temp = floor(temp); // round down to nearest integer
        temp -= 2; // subtract 2
        sum += temp;
    }
    return sum;
}