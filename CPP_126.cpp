bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] >= lst[i + 1]) {
            return false;
        }
    }
    return !any_of(lst.begin(), lst.end(), [i](int x){return count(lst.begin(), lst.end(), x) > 1;});
}