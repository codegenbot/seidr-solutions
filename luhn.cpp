int luhn(const vector<int>& nums) {
    int sum = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(i % 2 == 1) {
            int num = nums[i] * 2;
            if(num > 9) {
                num -= 9;
            }
            sum += num;
        } else {
            sum += nums[i];
        }
    }
    return sum;
}