bool is_sorted(vector<int> lst) {
    if (lst.size() <= 1) return true;

    for (size_t i = 1; i < lst.size(); ++i) {
        if (lst[i] < lst[i - 1]) return false;
    }

    for (size_t i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] == lst[i + 1] && (i + 2 < lst.size() && lst[i] == lst[i + 2])) return false;
    }

    return true;
}