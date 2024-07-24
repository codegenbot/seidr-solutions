int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int temp = (num / 3);
        if (temp < 1) {
            temp = 0;
        } else {
            temp--;
        }
        sum += temp;
    }
    return sum;
}