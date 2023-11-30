vector<int> order_by_points(vector<int> nums){
    if(nums.empty()) return nums;

    vector<pair<int, int>> sums;
    for(int i=0; i<nums.size(); i++){
        int sum_of_digits = 0;
        int num = nums[i];
        while(num != 0){
            sum_of_digits += abs(num % 10);
            num /= 10;
        }
        sums.push_back(make_pair(sum_of_digits, i));
    }

    sort(sums.begin(), sums.end());

    vector<int> result;
    for(auto sum : sums){
        result.push_back(nums[sum.second]);
    }

    return result;
}