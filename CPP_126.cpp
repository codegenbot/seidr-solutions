bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1]) {
            return false;
        }
    }
    vector<int>::iterator it = unique(lst.begin(), lst.end());
    return it == lst.end();
}