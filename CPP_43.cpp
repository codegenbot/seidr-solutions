bool pairs_sum_to_zero(vector<int> l) {
    sort(l.begin(), l.end());
    for (int i = 0; i < l.size() / 2; i++) { 
        if (l[i] + l[l.size() - 1 - i] == 0)
            return true;
    }
    return false;
}