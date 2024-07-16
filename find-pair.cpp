vector<pair<int, int>> findPairs(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    
    vector<pair<int, int>> result;
    
    for (int i = 0; i < nums.size(); i++) {
        int j = i + 1;
        
        while (j < nums.size()) {
            if (nums[i] + nums[j] == target) {
                // Check if the pair is already in the result
                bool isPairUnique = true;

                for (auto& existingPair : result) {
                    if ((existingPair.first == nums[i] && existingPair.second == nums[j]) ||
                        (existingPair.first == nums[j] && existingPair.second == nums[i])) {
                        isPairUnique = false;
                        break;
                    }
                }

                // If the pair is unique, add it to the result
                if (isPairUnique) {
                    result.push_back({min(nums[i], nums[j]), max(nums[i], nums[j])});
                }
            } else if (nums[i] + nums[j] > target) {
                j = i; // move both pointers at once when sum is greater than target
            } else {
                j++;
            }
        }
    }
    
    return result;
}