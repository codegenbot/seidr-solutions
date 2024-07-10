bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (auto it = s.begin(); it != s.end(); ++it) {
        if (find(s.begin(), it, -(*it)) != it && find(s.begin(), s.end(), (-(*it))) != s.end()) {
            return true;
        }
    }
    return false;
}