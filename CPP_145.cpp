vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int num1, int num2) {
        int sum1 = getDigitSum(num1);
        int sum2 = getDigitSum(num2);
        if (sum1 == sum2) {
            return num1 < num2;
        }
        return sum1 < sum2;
    });
    return nums;
}