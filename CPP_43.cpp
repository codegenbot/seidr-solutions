bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (auto it1 = s.begin(); it1 != s.end(); ++it1) {
        int complement = -(*it1);
        if (s.find(complement) != s.end() && *it1 != complement) {
            return true;
        }
    }
    return false;
}