vector<int> order_by_points(vector<int> nums){
    if(nums.empty()) return nums;

    vector<pair<int, int>> sums;
    for(int i=0; i<nums.size(); i++){
        int sum = 0;
        int n = nums[i];
        while(n != 0){
            int digit = n % 10;
            sum += abs(digit);
            n /= 10;
        }
        sums.push_back(make_pair(sum, i));
    }

    sort(sums.begin(), sums.end());

    vector<int> result;
    for(auto pair : sums){
        result.push_back(nums[pair.second]);
    }

    return result;
}