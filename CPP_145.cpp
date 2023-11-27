vector<int> order_by_points(vector<int> nums){
    if(nums.empty()){
        return nums;
    }
    
    vector<pair<int, int>> sumIndexPairs;
    for(int i = 0; i < nums.size(); i++){
        int sum = 0;
        int num = nums[i];
        while(num != 0){
            sum += abs(num % 10);
            num /= 10;
        }
        sumIndexPairs.push_back(make_pair(sum, i));
    }
    
    sort(sumIndexPairs.begin(), sumIndexPairs.end());
    
    vector<int> result;
    for(auto pair : sumIndexPairs){
        result.push_back(nums[pair.second]);
    }
    
    return result;
}