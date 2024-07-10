int luhn(vector<int>& nums) {
    int sum = 0;
    for(int i=0; i<nums.size(); i++) {
        if(i % 2 == 1) {
            int doubled = nums[i] * 2;
            if(doubled > 9) {
                sum += (doubled % 10 + 1);
            } else {
                sum += doubled;
            }
        } else {
            sum += nums[i];
        }
    }
    return sum;
}