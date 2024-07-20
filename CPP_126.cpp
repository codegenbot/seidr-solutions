bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] <= lst[i - 1]) {
            return false;
        }
    }
    vector<int> unique(lst.begin(), unique(lst.begin() + 1, lst.end()));
    return unique.size() == lst.size();
}