bool pairs_sum_to_zero(const vector<int>& l) {
    unordered_set<int> seen;
    for (int val : l) {
        if (seen.count(-val) > 0) {
            return true;
        }
        seen.insert(val);
    }
    return false;
}
```