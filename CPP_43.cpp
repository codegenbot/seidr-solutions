bool pairs_sum_to_zero(vector<int> l) {
    if (l.size() < 2)
        return false;
    sort(l.begin(), l.end());
    for (int i = 0; i < l.size() - 1; i++) {
        if (l[i] + l[i+1] == 0)
            return true;
        else if (l[i] > 0)
            break;
    }
    return false;
}