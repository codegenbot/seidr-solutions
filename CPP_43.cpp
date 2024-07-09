bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int x : s) {
        int y = -x;
        if (s.find(y) != s.end() && x != y) {
            return true;
        }
    }
    return false;
}