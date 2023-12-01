vector<int> order_by_points(vector<int> nums){
    if(nums.empty()){
        return nums;
    }
    
    vector<int> sums(nums.size());
    for(int i = 0; i < nums.size(); i++){
        int num = nums[i];
        if(num < 0){
            num = -num;
        }
        string numStr = to_string(num);
        int sum = 0;
        for(int j = 0; j < numStr.length(); j++){
            sum += numStr[j] - '0';
        }
        sums[i] = sum;
    }
    
    for(int i = 0; i < nums.size() - 1; i++){
        for(int j = 0; j < nums.size() - i - 1; j++){
            if(sums[j] > sums[j + 1] || (sums[j] == sums[j + 1] && j > j + 1)){
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                
                temp = sums[j];
                sums[j] = sums[j + 1];
                sums[j + 1] = temp;
            }
        }
    }
    
    return nums;
}