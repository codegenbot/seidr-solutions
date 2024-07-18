bool pairs_sum_to_zero(const vector<int>& l) {
    unordered_set<int> seen;
    for (int i : l) {
        if (seen.count(-i)) {
            return true;
        }
        seen.insert(i);
    }
    return false;
}