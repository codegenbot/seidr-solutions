vector<int> next_smallest(vector<int> lst) {
    if (lst.size() < 2) return vector<int>();
    sort(lst.begin(), lst.end());
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] != lst[i + 1]) {
            return vector<int>{lst[i + 1]};
        }
    }
    return vector<int>();
}