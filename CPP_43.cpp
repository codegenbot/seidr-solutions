bool pairs_sum_to_zero(const vector<int>& l) {
    unordered_set<int> s;
    for (int num : l) {
        if (s.count(-num) > 0) {
            return true;
        }
        s.insert(num);
    }
    return false;
}