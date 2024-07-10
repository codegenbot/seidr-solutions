bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int num : s) {
        if (s.count(-num)) return true;
    }
    return false;
}