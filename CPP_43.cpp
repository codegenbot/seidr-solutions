bool pairs_sum_to_zero(std::vector<int> l) {
    std::set<int> s(l.begin(), l.end());
    for (int i = 0; i < s.size(); i++) {
        int target = -s[i];
        if (target != s[i] && s.count(target)) {
            return true;
        }
    }
    return false;