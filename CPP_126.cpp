bool is_sorted(const vector<int>& lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1]) {
            return false;
        }
    }
    return true;
}