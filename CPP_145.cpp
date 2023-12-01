vector<int> order_by_points(vector<int> nums){
    vector<pair<int, int>> sums;
    
    for(int i=0; i<nums.size(); i++){
        int sum = 0;
        int num = nums[i];
        
        while(num != 0){
            sum += abs(num % 10);
            num /= 10;
        }
        
        sums.push_back(make_pair(sum, i));
    }
    
    sort(sums.begin(), sums.end());
    
    vector<int> result;
    
    for(int i=0; i<sums.size(); i++){
        result.push_back(nums[sums[i].second]);
    }
    
    return result;
}