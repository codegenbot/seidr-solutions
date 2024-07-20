bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i = 0; i < l.size(); i++) {
        int target = -l[i];
        if (s.find(target) != s.end() && target != l[i]) {
            return true;
        }
    }
    return false;
}