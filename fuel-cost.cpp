int fuelCost(vector<int> &nums) {
    int sum = 0;
    for (int num : nums) {
        int result = (num / 3);
        if(result < 1)
            result = 0;
        else
            result -= 2;
        sum += result;
    }
    return sum;
}