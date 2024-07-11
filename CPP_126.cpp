bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] <= lst[i-1]) return false;
    }
    bool has_duplicates = false;
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] == lst[i+1]) {
            has_duplicates = true;
            break;
        }
    }
    return !has_duplicates;
}