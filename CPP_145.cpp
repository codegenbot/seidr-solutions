vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> sums;
    
    // Calculate the sum of digits for each number and store it along with the index
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        int num = nums[i];
        
        // Calculate the sum of digits
        while (num != 0) {
            sum += abs(num % 10);
            num /= 10;
        }
        
        sums.push_back(make_pair(sum, i));
    }
    
    // Sort the sums vector in ascending order
    sort(sums.begin(), sums.end());
    
    vector<int> result;
    
    // Build the result vector based on the sorted sums
    for (auto pair : sums) {
        result.push_back(nums[pair.second]);
    }
    
    return result;
}