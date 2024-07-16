
bool pairs_sum_to_zero(const vector<int>& l) {
    unordered_set<int> s;
    for (int i : l) {
        if (s.count(-i)) {
            return true;
        }
        s.insert(i);
    }
    return false;
}