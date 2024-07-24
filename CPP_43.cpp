bool pairs_sum_to_zero(const vector<int>& l) {
    unordered_set<int> s;
    for (int i = 0; i < l.size(); i++) {
        if (s.count(-l[i])) {
            return true;
        }
        s.insert(l[i]);
    }
    return false;
}
