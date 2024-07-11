bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1]) {
            continue;
        } else {
            vector<int>::iterator it = unique(lst.begin() + i, lst.end());
            return it == lst.begin() + i;
        }
    }
    return true;
}