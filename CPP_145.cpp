vector<int> order_by_points(vector<int> nums){
    if(nums.empty()) return nums;
    vector<int> sums(nums.size(), 0);
    for(int i = 0; i < nums.size(); i++){
        int num = abs(nums[i]);
        int sum = 0;
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        sums[i] = sum;
    }
    for(int i = 0; i < nums.size()-1; i++){
        for(int j = 0; j < nums.size()-i-1; j++){
            if(sums[j] > sums[j+1] || (sums[j] == sums[j+1] && nums[j] > nums[j+1])){
                swap(sums[j], sums[j+1]);
                swap(nums[j], nums[j+1]);
            }
        }
    }
    return nums;
}