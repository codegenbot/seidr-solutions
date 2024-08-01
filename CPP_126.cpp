bool is_sorted(vector<int> lst) {
    if (lst.size() <= 1) return true; // vector with one or zero elements is sorted
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1]) continue;
        if (count(lst.begin(), lst.end(), lst[i]) > 1) return false;
        break;
    }
    return true;
}