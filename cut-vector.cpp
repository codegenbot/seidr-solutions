std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> nums) {
    int n = nums.size();
    int leftSum = 0;
    int rightSum = 0;
    
    // Calculate the sum of all numbers in the vector
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }
    
    // Iterate through the vector and find the spot where the difference is smallest
    int minDiff = abs(leftSum - rightSum);
    int cutIndex = -1;
    
    for (int i = 0; i < n-1; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    // Create the two resulting subvectors
    std::vector<int> leftVector(nums.begin(), nums.begin() + cutIndex + 1);
    std::vector<int> rightVector(nums.begin() + cutIndex + 1, nums.end());
    
    return std::make_pair(leftVector, rightVector);
}