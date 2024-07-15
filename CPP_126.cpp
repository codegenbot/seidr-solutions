bool is_sorted(vector<int>& lst) {
    for (size_t i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1] || (i > 0 && lst[i] == lst[i - 1])) {
            return false;
        }
    }
    return true;
}