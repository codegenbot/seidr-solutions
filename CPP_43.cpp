bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i : s) {
        int comp = -i;
        if (s.find(comp) != s.end() && i != comp) {
            return true;
        }
    }
    return false;
}