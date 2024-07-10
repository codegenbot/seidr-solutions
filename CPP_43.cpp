bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int x : s) {
        int target = -x;
        if (target != x && s.find(target) != s.end()) {
            return true;
        }
    }
    return false;
}