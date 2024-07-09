Here is the completed code:

bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1]) {
            return false;
        }
    }
    vector<int> unique_lst(lst.begin(), unique(lst.end()));
    return unique_lst.size() == 1 || all_of(unique_lst.begin(), unique_lst.end(), [&](int x) { return count(lst.begin(), lst.end(), x) == 1; });
}