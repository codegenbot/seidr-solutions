vector<int> findPair(vector<int> nums, int target) {
    vector<int> result;
    map<int, int> seen;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (seen.count(complement)) {
            result.push_back(complement);
            result.push_back(nums[i]);
            break;
        }
        seen[nums[i]] = i;
    }

    return result;
}