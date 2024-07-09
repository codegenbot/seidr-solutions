bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end()); 
    for (auto it = next(s.begin(), 1); it != s.end(); ++it) { 
        int complement = -(*it);
        if (find(s.begin(), it, complement) != s.end()) {
            return true;
        }
    }
    return false;
}