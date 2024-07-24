bool pairs_sum_to_zero(const vector<int>& l) {
    unordered_set<int> seen;

    for (int i = 0; i < l.size(); i++) {
        if (seen.count(-l[i]) > 0) {
            return true;
        }
        seen.insert(l[i]);
    }
    
    return false;
}