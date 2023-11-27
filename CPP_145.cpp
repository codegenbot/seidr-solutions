vector<int> order_by_points(vector<int> nums){
    if (nums.empty()) {
        return nums;
    }

    // Calculate the sums of digits for each number
    vector<int> sums;
    for (int num : nums) {
        int sum = 0;
        int temp = abs(num);
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        sums.push_back(sum);
    }
    
    // Sort the numbers based on sums of digits and original indices
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (sums[i] > sums[j] || (sums[i] == sums[j] && i > j)) {
                int temp_sum = sums[i];
                int temp_num = nums[i];
                sums[i] = sums[j];
                nums[i] = nums[j];
                sums[j] = temp_sum;
                nums[j] = temp_num;
            }
        }
    }

    return nums;
}