int luhn(vector<int>& nums) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = 0; i < nums.size(); i++) {
        int n = nums[i];
        if (doubleNext) {
            n *= 2;
            if (n > 9) {
                n -= 9;
            }
        }
        sum += n;
        doubleNext = !doubleNext;
    }

    return sum;
}