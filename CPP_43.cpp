bool pairs_sum_to_zero(vector<int> l) {
    sort(l.begin(), l.end());
    for (int i = 1; i < l.size(); i++) {
        if (l[i-1] + l[i] == 0)
            return true;
    }
    return false;
}