bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (auto i = s.begin(); i != s.end(); ++i) {
        if (find(s.begin(), i, -(*i)) != i) {
            return true;
        }
    }
    return false;
}