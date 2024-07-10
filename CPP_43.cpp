bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (auto i = s.begin(); i != s.end(); ++i) {
        int complement = -(*i);
        if (s.find(complement) != s.end() && *i != complement) {
            return true;
        }
    }
    return false;
}