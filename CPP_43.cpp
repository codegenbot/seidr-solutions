bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i : s) {
        if (s.find(-i) != s.end()) return true;
    }
    return false;
}