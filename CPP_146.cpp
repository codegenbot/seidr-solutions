int specialFilter(vector<int> nums){
    int count = 0;
    for(int i=0; i<nums.size(); i++){
        string num_str = to_string(nums[i]);
        int first_digit = num_str[0] - '0';
        int last_digit = num_str[num_str.length()-1] - '0';
        
        if(nums[i] > 10 && first_digit % 2 != 0 && last_digit % 2 != 0){
            count++;
        }
    }
    return count;
}