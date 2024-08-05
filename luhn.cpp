int luhn(vector<int> nums) {
    int sum = 0;
    bool alternate = false;
    for (int i = 0; i < 16; ++i) {
        if (alternate) {
            int n = nums[i] * 2;
            sum += (n > 9 ? n - 9 : n);
        } else {
            sum += nums[i];
        }
        alternate = !alternate;
    }
    return sum;
}