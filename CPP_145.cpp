vector<int> order_by_points(vector<int> nums){
    vector<pair<int, int>> digitSums;
    for(int i=0; i<nums.size(); i++){
        int sum = 0;
        int num = nums[i];
        while(num != 0){
            sum += abs(num%10);
            num /= 10;
        }
        digitSums.push_back(make_pair(sum, i));
    }
    sort(digitSums.begin(), digitSums.end());
    vector<int> result;
    for(int i=0; i<digitSums.size(); i++){
        result.push_back(nums[digitSums[i].second]);
    }
    return result;
}