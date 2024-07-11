bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int x : s) {
        int complement = -x;
        if (s.find(complement) != s.end() && x != complement) {
            return true;
        }
    }
    return false;
}