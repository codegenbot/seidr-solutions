bool pairs_sum_to_zero(vector<int> l) {
    sort(l.begin(), l.end());
    for (int i = 0; i < l.size(); i++) {
        if (binary_search(l.begin()+i+1, l.end(), -l[i]))
            return true;
    }
    return false;
}