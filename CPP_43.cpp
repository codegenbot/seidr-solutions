bool pairs_sum_to_zero(const vector<int>& l) {
    unordered_set<int> nums;
    for (int num : l) {
        if (nums.count(-num) > 0) {
            return true;
        }
        nums.insert(num);
    }
    return false;
}