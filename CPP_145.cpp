vector<int> order_by_points(vector<int> nums) {
    if (nums.empty()) {
        return nums;
    }
    
    // Create a vector of pairs to store the sum of digits and original index
    vector<pair<int, int>> sumAndIndex(nums.size());
    
    // Calculate the sum of digits for each number and store the pair in sumAndIndex
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        int num = abs(nums[i]);
        
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        
        sumAndIndex[i] = make_pair(sum, i);
    }
    
    // Sort the sumAndIndex vector in ascending order based on the sum of digits
    sort(sumAndIndex.begin(), sumAndIndex.end());
    
    // Create a new vector to store the sorted numbers
    vector<int> result(nums.size());
    
    // Copy the numbers from the original vector to the result vector based on their index
    for (int i = 0; i < nums.size(); i++) {
        result[i] = nums[sumAndIndex[i].second];
    }
    
    return result;
}