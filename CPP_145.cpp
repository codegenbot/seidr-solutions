vector<int> order_by_points(vector<int> nums){
    vector<int> result;
    vector<pair<int, int>> sums;

    // Calculate the sum of digits for each number
    for(int i = 0; i < nums.size(); i++){
        int sum = 0;
        int num = nums[i];
        while(num != 0){
            sum += abs(num % 10);
            num /= 10;
        }
        sums.push_back(make_pair(sum, i));
    }

    // Sort the sums vector based on the sum of digits
    sort(sums.begin(), sums.end());

    // Populate the result vector based on the sorted sums vector
    for(int i = 0; i < sums.size(); i++){
        result.push_back(nums[sums[i].second]);
    }

    return result;
}