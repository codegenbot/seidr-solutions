bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) return false;
    }
    vector<int> unique(lst.begin(), unique_copy(lst.begin(), lst.end()));
    return true;
}