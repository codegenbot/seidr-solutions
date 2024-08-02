bool triples_sum_to_zero(const vector<int>& l) {
    unordered_set<int> nums;
    for (int i = 0; i < l.size(); ++i) {
        for (int j = i + 1; j < l.size(); ++j) {
            int sum = l[i] + l[j];
            if (nums.count(-sum)) {
                return true;
            }
            nums.insert(l[j]);
        }
    }
    return false;
}