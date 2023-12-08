vector<int> findPair(vector<int>& nums, int target) {
    unordered_set<int> complement;
    for (int num : nums) {
        int complementNum = target - num;
        if (complement.count(complementNum)) {
            return {num, complementNum};
        }
        complement.insert(num);
    }
    return {};
}