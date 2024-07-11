bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int x : s) {
        if (s.count(-x)) return true;
    }
    return false;
}