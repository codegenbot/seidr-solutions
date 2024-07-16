std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxLeader = nums[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] > maxLeader) {
            maxLeader = nums[i];
        }
    }
    leaders.push_back(maxLeader);
    return leaders;
}