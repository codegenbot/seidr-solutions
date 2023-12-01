bool is_sorted(vector<int> lst){
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    if (sorted_lst != lst) {
        return false;
    }
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] == lst[i + 1]) {
            return false;
        }
    }
    return true;
}