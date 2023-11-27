vector<int> order_by_points(vector<int> nums){
    if(nums.empty()){
        return nums;
    }
    
    vector<pair<int, int>> sumDigits;
    
    for(int i=0; i<nums.size(); i++){
        int num = nums[i];
        int sum = 0;
        
        while(num != 0){
            sum += abs(num % 10);
            num /= 10;
        }
        
        sumDigits.push_back(make_pair(sum, i));
    }
    
    sort(sumDigits.begin(), sumDigits.end());
    
    vector<int> result;
    
    for(auto pair : sumDigits){
        result.push_back(nums[pair.second]);
    }
    
    return result;
}