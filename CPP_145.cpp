vector<int> order_by_points(vector<int> nums){
    for (int i = 0; i < nums.size()-1; i++) {
        for (int j = 0; j < nums.size()-i-1; j++) {
            int sum_of_digits1 = 0;
            int sum_of_digits2 = 0;
            int temp1 = nums[j];
            int temp2 = nums[j+1];
            
            while (temp1 != 0) {
                sum_of_digits1 += abs(temp1 % 10);
                temp1 /= 10;
            }
            
            while (temp2 != 0) {
                sum_of_digits2 += abs(temp2 % 10);
                temp2 /= 10;
            }
            
            if (sum_of_digits1 > sum_of_digits2 || (sum_of_digits1 == sum_of_digits2 && j > j+1)) {
                swap(nums[j], nums[j+1]);
            }
        }
    }
    
    return nums;
}